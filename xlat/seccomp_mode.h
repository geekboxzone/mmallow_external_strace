/* Generated by ./xlat/gen.sh from ./xlat/seccomp_mode.in; do not edit. */

static const struct xlat seccomp_mode[] = {
#if !(defined(SECCOMP_MODE_DISABLED) || (defined(HAVE_DECL_SECCOMP_MODE_DISABLED) && HAVE_DECL_SECCOMP_MODE_DISABLED))
# define SECCOMP_MODE_DISABLED 0
#endif
 XLAT(SECCOMP_MODE_DISABLED),
#if !(defined(SECCOMP_MODE_STRICT) || (defined(HAVE_DECL_SECCOMP_MODE_STRICT) && HAVE_DECL_SECCOMP_MODE_STRICT))
# define SECCOMP_MODE_STRICT 1
#endif
 XLAT(SECCOMP_MODE_STRICT),
#if !(defined(SECCOMP_MODE_FILTER) || (defined(HAVE_DECL_SECCOMP_MODE_FILTER) && HAVE_DECL_SECCOMP_MODE_FILTER))
# define SECCOMP_MODE_FILTER 2
#endif
 XLAT(SECCOMP_MODE_FILTER),
 XLAT_END
};