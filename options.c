//
// Created by s18 on 11/09/2019.
//

#include "crypto_header.h"

t_options		*get_options()
{
	static t_options	*options = NULL;
	if(!options)
	{
		options = malloc(sizeof(t_options));
		options->print = FALSE;
		options->quiet = FALSE;
		options->reverse = FALSE;
		options->string = FALSE;
	}
	return options;
}

static uint		st_assign_opt(t_options *o, const char *s)
{
	uint		len;

	len = ft_strlen(s);
	while(len-- > 0) {
		if (s[len] == 'p')
			o->print = TRUE;
		else if (s[len] == 'q')
			o->quiet = TRUE;
		else if (s[len] == 'r')
			o->reverse = TRUE;
		else if (s[len] == 's')
			o->string = TRUE;
		else if(s[len] == '-' && len == 0)
			PASS
		else
			return INVALID_OPTION;
	}
	return SUCCESS;
}

uint			set_options_from_arg(const char *s)
{
	t_options	*o;
	t_target	*t;

	o = get_options();
	if(o->string || s[0] != '-')
	{
		t = malloc(sizeof(t_target));
		t->is_file = !o->string;
		t->s = s;
		ft_lstaddend(&o->target_list, ft_lstnew(t, sizeof(t_target)));
		o->string = FALSE;
		return SUCCESS;
	}
	else
		return st_assign_opt(o, s);
}

uint			check_conflict()
{
	t_options	*o;

	o = get_options();
	if(o->string)
		return EXPECTED_STRING;
	return SUCCESS;
}