#ifdef CONFIG_PRINTK_DISABLE_MSG

#undef printk
#undef pr_info
#undef pr_err
#undef pr_warn
#undef pr_dbg
#undef pr_debug
#undef pr_info_ratelimited
#undef pr_err_ratelimited
#undef pr_warn_ratelimited
#undef pr_dbg_ratelimited
#undef pr_debug_ratelimited

#define printk(fmt, ...)
#define pr_info(fmt, ...)
#define pr_err(fmt, ...)
#define pr_warn(fmt, ...)
#define pr_dbg(fmt, ...)
#define pr_debug(fmt, ...)
#define pr_info_ratelimited(fmt, ...)
#define pr_err_ratelimited(fmt, ...)
#define pr_warn_ratelimited(fmt, ...)
#define pr_dbg_ratelimited(fmt, ...)
#define pr_debug_ratelimited(fmt, ...)

#undef dev_info
#undef dev_dbg
#undef dev_err
#undef dev_warn
#undef dev_info_ratelimited
#undef dev_dbg_ratelimited
#undef dev_warn_ratelimited
#undef dev_err_ratelimited

#define dev_info(dev, fmt, ...)
#define dev_dbg(dev, fmt, ...)
#define dev_err(dev, fmt, ...)
#define dev_warn(dev, fmt, ...)
#define dev_err_ratelimited(dev, fmt, ...)
#define dev_info_ratelimited(dev, fmt, ...)
#define dev_dbg_ratelimited(dev, fmt, ...)
#define dev_warn_ratelimited(dev, fmt, ...)

#undef qg_dbg
#undef smblib_dbg

#define qg_dbg(chip, reason, fmt, ...)
#define smblib_dbg(chg, reason, fmt, ...)

#endif
