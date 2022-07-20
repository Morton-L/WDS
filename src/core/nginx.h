
/*
 * Copyright (C) Igor Sysoev
 * Copyright (C) Nginx, Inc.
 */


#ifndef _NGINX_H_INCLUDED_
#define _NGINX_H_INCLUDED_


#define nginx_version      1023000
#define NGINX_VERSION      "1.23.0"
#define RWDS_VERSION       "1.0.0"
#define NGINX_VER          "Rowsen Web Defense System/" RWDS_VERSION
#define RWDS_VER           "Rowsen Web Defense System/" RWDS_VERSION

#ifdef NGX_BUILD
#define NGINX_VER_BUILD    NGINX_VER " (" NGX_BUILD ")"
#else
#define NGINX_VER_BUILD    NGINX_VER
#endif

#define NGINX_VAR          "Rowsen Web Defense System"
#define RWDS_VAR           "Rowsen Web Defense System"
#define NGX_OLDPID_EXT     ".oldbin"


#endif /* _NGINX_H_INCLUDED_ */
