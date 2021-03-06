[5000] = { 3,	TD,		printargs, "n64_read"			}, /* start of Linux N64 */
[5001] = { 3,	TD,		printargs, "n64_write"			},
[5002] = { 3,	TD|TF,		printargs, "n64_open"			},
[5003] = { 1,	TD,		printargs, "n64_close"			},
[5004] = { 2,	TF,		printargs, "n64_stat"			},
[5005] = { 2,	TD,		printargs, "n64_fstat"			},
[5006] = { 2,	TF,		printargs, "n64_lstat"			},
[5007] = { 3,	TD,		printargs, "n64_poll"			},
[5008] = { 3,	TD,		printargs, "n64_lseek"			},
[5009] = { 6,	TD|TM|SI,	printargs, "n64_mmap"			},
[5010] = { 3,	TM|SI,		printargs, "n64_mprotect"		},
[5011] = { 2,	TM|SI,		printargs, "n64_munmap"		},
[5012] = { 1,	TM|SI,		printargs, "n64_brk"			},
[5013] = { 4,	TS,		printargs, "n64_rt_sigaction"		},
[5014] = { 4,	TS,		printargs, "n64_rt_sigprocmask"	},
[5015] = { 3,	TD,		printargs, "n64_ioctl"			},
[5016] = { 4,	TD,		printargs, "n64_pread64"		},
[5017] = { 4,	TD,		printargs, "n64_pwrite64"		},
[5018] = { 3,	TD,		printargs, "n64_readv"			},
[5019] = { 3,	TD,		printargs, "n64_writev"		},
[5020] = { 2,	TF,		printargs, "n64_access"		},
[5021] = { 1,	TD,		printargs, "n64_pipe"			},
[5022] = { 5,	TD,		printargs, "n64_select"		},
[5023] = { 0,	0,		printargs, "n64_sched_yield"		},
[5024] = { 5,	TM|SI,		printargs, "n64_mremap"		},
[5025] = { 3,	TM,		printargs, "n64_msync"			},
[5026] = { 3,	TM,		printargs, "n64_mincore"		},
[5027] = { 3,	TM,		printargs, "n64_madvise"		},
[5028] = { 3,	TI,		printargs, "n64_shmget"		},
[5029] = { 3,	TI|TM|SI,	printargs, "n64_shmat"			},
[5030] = { 3,	TI,		printargs, "n64_shmctl"		},
[5031] = { 1,	TD,		printargs, "n64_dup"			},
[5032] = { 2,	TD,		printargs, "n64_dup2"			},
[5033] = { 0,	TS,		printargs, "n64_pause"			},
[5034] = { 2,	0,		printargs, "n64_nanosleep"		},
[5035] = { 2,	0,		printargs, "n64_getitimer"		},
[5036] = { 3,	0,		printargs, "n64_setitimer"		},
[5037] = { 1,	0,		printargs, "n64_alarm"			},
[5038] = { 0,	0,		printargs, "n64_getpid"		},
[5039] = { 4,	TD|TN,		printargs, "n64_sendfile"		},
[5040] = { 3,	TN,		printargs, "n64_socket"		},
[5041] = { 3,	TN,		printargs, "n64_connect"		},
[5042] = { 3,	TN,		printargs, "n64_accept"		},
[5043] = { 6,	TN,		printargs, "n64_sendto"		},
[5044] = { 6,	TN,		printargs, "n64_recvfrom"		},
[5045] = { 3,	TN,		printargs, "n64_sendmsg"		},
[5046] = { 3,	TN,		printargs, "n64_recvmsg"		},
[5047] = { 2,	TN,		printargs, "n64_shutdown"		},
[5048] = { 3,	TN,		printargs, "n64_bind"			},
[5049] = { 2,	TN,		printargs, "n64_listen"		},
[5050] = { 3,	TN,		printargs, "n64_getsockname"		},
[5051] = { 3,	TN,		printargs, "n64_getpeername"		},
[5052] = { 4,	TN,		printargs, "n64_socketpair"		},
[5053] = { 5,	TN,		printargs, "n64_setsockopt"		},
[5054] = { 5,	TN,		printargs, "n64_getsockopt"		},
[5055] = { 5,	TP,		printargs, "n64_clone"			},
[5056] = { 0,	TP,		printargs, "n64_fork"			},
[5057] = { 3,	TF|TP|SE|SI,	printargs, "n64_execve"		},
[5058] = { 1,	TP|SE,		printargs, "n64_exit"			},
[5059] = { 4,	TP,		printargs, "n64_wait4"			},
[5060] = { 2,	TS,		printargs, "n64_kill"			},
[5061] = { 1,	0,		printargs, "n64_uname"			},
[5062] = { 3,	TI,		printargs, "n64_semget"		},
[5063] = { 3,	TI,		printargs, "n64_semop"			},
[5064] = { 4,	TI,		printargs, "n64_semctl"		},
[5065] = { 1,	TI|TM|SI,	printargs, "n64_shmdt"			},
[5066] = { 2,	TI,		printargs, "n64_msgget"		},
[5067] = { 4,	TI,		printargs, "n64_msgsnd"		},
[5068] = { 5,	TI,		printargs, "n64_msgrcv"		},
[5069] = { 3,	TI,		printargs, "n64_msgctl"		},
[5070] = { 3,	TD,		printargs, "n64_fcntl"			},
[5071] = { 2,	TD,		printargs, "n64_flock"			},
[5072] = { 1,	TD,		printargs, "n64_fsync"			},
[5073] = { 1,	TD,		printargs, "n64_fdatasync"		},
[5074] = { 2,	TF,		printargs, "n64_truncate"		},
[5075] = { 2,	TD,		printargs, "n64_ftruncate"		},
[5076] = { 3,	TD,		printargs, "n64_getdents"		},
[5077] = { 2,	TF,		printargs, "n64_getcwd"		},
[5078] = { 1,	TF,		printargs, "n64_chdir"			},
[5079] = { 1,	TD,		printargs, "n64_fchdir"		},
[5080] = { 2,	TF,		printargs, "n64_rename"		},
[5081] = { 2,	TF,		printargs, "n64_mkdir"			},
[5082] = { 1,	TF,		printargs, "n64_rmdir"			},
[5083] = { 2,	TD|TF,		printargs, "n64_creat"			},
[5084] = { 2,	TF,		printargs, "n64_link"			},
[5085] = { 1,	TF,		printargs, "n64_unlink"		},
[5086] = { 2,	TF,		printargs, "n64_symlink"		},
[5087] = { 3,	TF,		printargs, "n64_readlink"		},
[5088] = { 2,	TF,		printargs, "n64_chmod"			},
[5089] = { 2,	TD,		printargs, "n64_fchmod"		},
[5090] = { 3,	TF,		printargs, "n64_chown"			},
[5091] = { 3,	TD,		printargs, "n64_fchown"		},
[5092] = { 3,	TF,		printargs, "n64_lchown"		},
[5093] = { 1,	0,		printargs, "n64_umask"			},
[5094] = { 2,	0,		printargs, "n64_gettimeofday"		},
[5095] = { 2,	0,		printargs, "n64_getrlimit"		},
[5096] = { 2,	0,		printargs, "n64_getrusage"		},
[5097] = { 1,	0,		printargs, "n64_sysinfo"		},
[5098] = { 1,	0,		printargs, "n64_times"			},
[5099] = { 4,	0,		printargs, "n64_ptrace"		},
[5100] = { 0,	NF,		printargs, "n64_getuid"		},
[5101] = { 3,	0,		printargs, "n64_syslog"		},
[5102] = { 0,	NF,		printargs, "n64_getgid"		},
[5103] = { 1,	0,		printargs, "n64_setuid"		},
[5104] = { 1,	0,		printargs, "n64_setgid"		},
[5105] = { 0,	NF,		printargs, "n64_geteuid"		},
[5106] = { 0,	NF,		printargs, "n64_getegid"		},
[5107] = { 2,	0,		printargs, "n64_setpgid"		},
[5108] = { 0,	0,		printargs, "n64_getppid"		},
[5109] = { 0,	0,		printargs, "n64_getpgrp"		},
[5110] = { 0,	0,		printargs, "n64_setsid"		},
[5111] = { 2,	0,		printargs, "n64_setreuid"		},
[5112] = { 2,	0,		printargs, "n64_setregid"		},
[5113] = { 2,	0,		printargs, "n64_getgroups"		},
[5114] = { 2,	0,		printargs, "n64_setgroups"		},
[5115] = { 3,	0,		printargs, "n64_setresuid"		},
[5116] = { 3,	0,		printargs, "n64_getresuid"		},
[5117] = { 3,	0,		printargs, "n64_setresgid"		},
[5118] = { 3,	0,		printargs, "n64_getresgid"		},
[5119] = { 0,	0,		printargs, "n64_getpgid"		},
[5120] = { 1,	NF,		printargs, "n64_setfsuid"		},
[5121] = { 1,	NF,		printargs, "n64_setfsgid"		},
[5122] = { 1,	0,		printargs, "n64_getsid"		},
[5123] = { 2,	0,		printargs, "n64_capget"		},
[5124] = { 2,	0,		printargs, "n64_capset"		},
[5125] = { 2,	TS,		printargs, "n64_rt_sigpending"		},
[5126] = { 4,	TS,		printargs, "n64_rt_sigtimedwait"	},
[5127] = { 3,	TS,		printargs, "n64_rt_sigqueueinfo"	},
[5128] = { 2,	TS,		printargs, "n64_rt_sigsuspend"		},
[5129] = { 2,	TS,		printargs, "n64_sigaltstack"		},
[5130] = { 2,	TF,		printargs, "n64_utime"			},
[5131] = { 3,	TF,		printargs, "n64_mknod"			},
[5132] = { 1,	0,		printargs, "n64_personality"		},
[5133] = { 2,	0,		printargs, "n64_ustat"			},
[5134] = { 3,	TF,		printargs, "n64_statfs"		},
[5135] = { 3,	TD,		printargs, "n64_fstatfs"		},
[5136] = { 5,	0,		printargs, "n64_sysfs"			},
[5137] = { 2,	0,		printargs, "n64_getpriority"		},
[5138] = { 3,	0,		printargs, "n64_setpriority"		},
[5139] = { 2,	0,		printargs, "n64_sched_setparam"	},
[5140] = { 2,	0,		printargs, "n64_sched_getparam"	},
[5141] = { 3,	0,		printargs, "n64_sched_setscheduler"	},
[5142] = { 1,	0,		printargs, "n64_sched_getscheduler"	},
[5143] = { 1,	0,		printargs, "n64_sched_get_priority_max"},
[5144] = { 1,	0,		printargs, "n64_sched_get_priority_min"},
[5145] = { 2,	0,		printargs, "n64_sched_rr_get_interval"	},
[5146] = { 2,	TM,		printargs, "n64_mlock"			},
[5147] = { 2,	TM,		printargs, "n64_munlock"		},
[5148] = { 1,	TM,		printargs, "n64_mlockall"		},
[5149] = { 0,	TM,		printargs, "n64_munlockall"		},
[5150] = { 0,	0,		printargs, "n64_vhangup"		},
[5151] = { 2,	TF,		printargs, "n64_pivot_root"		},
[5152] = { 1,	0,		printargs, "n64__sysctl"		},
[5153] = { 5,	0,		printargs, "n64_prctl"			},
[5154] = { 1,	0,		printargs, "n64_adjtimex"		},
[5155] = { 2,	0,		printargs, "n64_setrlimit"		},
[5156] = { 1,	TF,		printargs, "n64_chroot"		},
[5157] = { 0,	0,		printargs, "n64_sync"			},
[5158] = { 1,	TF,		printargs, "n64_acct"			},
[5159] = { 2,	0,		printargs, "n64_settimeofday"		},
[5160] = { 5,	TF,		printargs, "n64_mount"			},
[5161] = { 2,	TF,		printargs, "n64_umount2"		},
[5162] = { 2,	TF,		printargs, "n64_swapon"		},
[5163] = { 1,	TF,		printargs, "n64_swapoff"		},
[5164] = { 4,	0,		printargs, "n64_reboot"		},
[5165] = { 2,	0,		printargs, "n64_sethostname"		},
[5166] = { 2,	0,		printargs, "n64_setdomainname"		},
[5167] = { 2,	0,		printargs, "n64_create_module"		},
[5168] = { 4,	0,		printargs, "n64_init_module"		},
[5169] = { 1,	0,		printargs, "n64_delete_module"		},
[5170] = { 1,	0,		printargs, "n64_get_kernel_syms"	},
[5171] = { 5,	0,		printargs, "n64_query_module"		},
[5172] = { 4,	TF,		printargs, "n64_quotactl"		},
[5173] = { 3,	0,		printargs, "n64_nfsservctl"		},
[5174] = { 5,	TN,		printargs, "n64_getpmsg"		},
[5175] = { 5,	TN,		printargs, "n64_putpmsg"		},
[5176] = { 0,	0,		printargs, "n64_afs_syscall"		},
[5177] = { 0,	0,		printargs, "n64_reserved177"		},
[5178] = { 0,	0,		printargs, "n64_gettid"		},
[5179] = { 3,	TD,		printargs, "n64_readahead"		},
[5180] = { 5,	TF,		printargs, "n64_setxattr"		},
[5181] = { 5,	TF,		printargs, "n64_lsetxattr"		},
[5182] = { 5,	TD,		printargs, "n64_fsetxattr"		},
[5183] = { 4,	TF,		printargs, "n64_getxattr"		},
[5184] = { 4,	TF,		printargs, "n64_lgetxattr"		},
[5185] = { 4,	TD,		printargs, "n64_fgetxattr"		},
[5186] = { 3,	TF,		printargs, "n64_listxattr"		},
[5187] = { 3,	TF,		printargs, "n64_llistxattr"		},
[5188] = { 3,	TD,		printargs, "n64_flistxattr"		},
[5189] = { 2,	TF,		printargs, "n64_removexattr"		},
[5190] = { 2,	TF,		printargs, "n64_lremovexattr"		},
[5191] = { 2,	TD,		printargs, "n64_fremovexattr"		},
[5192] = { 2,	TS,		printargs, "n64_tkill"			},
[5193] = { 1,	0,		printargs, "n64_time"			},
[5194] = { 6,	0,		printargs, "n64_futex"			},
[5195] = { 3,	0,		printargs, "n64_sched_setaffinity"	},
[5196] = { 3,	0,		printargs, "n64_sched_getaffinity"	},
[5197] = { 3,	0,		printargs, "n64_cacheflush"		},
[5198] = { 3,	0,		printargs, "n64_cachectl"		},
[5199] = { 4,	0,		printargs, "n64_sysmips"		},
[5200] = { 2,	0,		printargs, "n64_io_setup"		},
[5201] = { 1,	0,		printargs, "n64_io_destroy"		},
[5202] = { 5,	0,		printargs, "n64_io_getevents"		},
[5203] = { 3,	0,		printargs, "n64_io_submit"		},
[5204] = { 3,	0,		printargs, "n64_io_cancel"		},
[5205] = { 1,	TP|SE,		printargs, "n64_exit_group"		},
[5206] = { 3,	0,		printargs, "n64_lookup_dcookie"	},
[5207] = { 1,	TD,		printargs, "n64_epoll_create"		},
[5208] = { 4,	TD,		printargs, "n64_epoll_ctl"		},
[5209] = { 4,	TD,		printargs, "n64_epoll_wait"		},
[5210] = { 5,	TM|SI,		printargs, "n64_remap_file_pages"	},
[5211] = { 0,	TS,		printargs, "n64_rt_sigreturn"		},
[5212] = { 1,	0,		printargs, "n64_set_tid_address"	},
[5213] = { 0,	0,		printargs, "n64_restart_syscall"	},
[5214] = { 4,	TI,		printargs, "n64_semtimedop"		},
[5215] = { 4,	TD,		printargs, "n64_fadvise64_64"		},
[5216] = { 3,	0,		printargs, "n64_timer_create"		},
[5217] = { 4,	0,		printargs, "n64_timer_settime"		},
[5218] = { 2,	0,		printargs, "n64_timer_gettime"		},
[5219] = { 1,	0,		printargs, "n64_timer_getoverrun"	},
[5220] = { 1,	0,		printargs, "n64_timer_delete"		},
[5221] = { 2,	0,		printargs, "n64_clock_settime"		},
[5222] = { 2,	0,		printargs, "n64_clock_gettime"		},
[5223] = { 2,	0,		printargs, "n64_clock_getres"		},
[5224] = { 4,	0,		printargs, "n64_clock_nanosleep"	},
[5225] = { 3,	TS,		printargs, "n64_tgkill"		},
[5226] = { 2,	TF,		printargs, "n64_utimes"		},
[5227] = { 6,	TM,		printargs, "n64_mbind"			},
[5228] = { 5,	TM,		printargs, "n64_get_mempolicy"		},
[5229] = { 3,	TM,		printargs, "n64_set_mempolicy"		},
[5230] = { 4,	0,		printargs, "n64_mq_open"		},
[5231] = { 1,	0,		printargs, "n64_mq_unlink"		},
[5232] = { 5,	0,		printargs, "n64_mq_timedsend"		},
[5233] = { 5,	0,		printargs, "n64_mq_timedreceive"	},
[5234] = { 2,	0,		printargs, "n64_mq_notify"		},
[5235] = { 3,	0,		printargs, "n64_mq_getsetattr"		},
[5236] = { 5,	0,		printargs, "n64_vserver"		},
[5237] = { 5,	TP,		printargs, "n64_waitid"		},
[5238] = { },
[5239] = { 5,	0,		printargs, "n64_add_key"		},
[5240] = { 4,	0,		printargs, "n64_request_key"		},
[5241] = { 5,	0,		printargs, "n64_keyctl"		},
[5242] = { 1,	0,		printargs, "n64_set_thread_area"	},
[5243] = { 0,	TD,		printargs, "n64_inotify_init"		},
[5244] = { 3,	TD,		printargs, "n64_inotify_add_watch"	},
[5245] = { 2,	TD,		printargs, "n64_inotify_rm_watch"	},
[5246] = { 4,	TM,		printargs, "n64_migrate_pages"		},
[5247] = { 4,	TD|TF,		printargs, "n64_openat"		},
[5248] = { 3,	TD|TF,		printargs, "n64_mkdirat"		},
[5249] = { 4,	TD|TF,		printargs, "n64_mknodat"		},
[5250] = { 5,	TD|TF,		printargs, "n64_fchownat"		},
[5251] = { 3,	TD|TF,		printargs, "n64_futimesat"		},
[5252] = { 4,	TD|TF,		printargs, "n64_newfstatat"		},
[5253] = { 3,	TD|TF,		printargs, "n64_unlinkat"		},
[5254] = { 4,	TD|TF,		printargs, "n64_renameat"		},
[5255] = { 5,	TD|TF,		printargs, "n64_linkat"		},
[5256] = { 3,	TD|TF,		printargs, "n64_symlinkat"		},
[5257] = { 4,	TD|TF,		printargs, "n64_readlinkat"		},
[5258] = { 3,	TD|TF,		printargs, "n64_fchmodat"		},
[5259] = { 3,	TD|TF,		printargs, "n64_faccessat"		},
[5260] = { 6,	TD,		printargs, "n64_pselect6"		},
[5261] = { 5,	TD,		printargs, "n64_ppoll"			},
[5262] = { 1,	TP,		printargs, "n64_unshare"		},
[5263] = { 6,	TD,		printargs, "n64_splice"		},
[5264] = { 4,	TD,		printargs, "n64_sync_file_range"	},
[5265] = { 4,	TD,		printargs, "n64_tee"			},
[5266] = { 4,	TD,		printargs, "n64_vmsplice"		},
[5267] = { 6,	TM,		printargs, "n64_move_pages"		},
[5268] = { 2,	0,		printargs, "n64_set_robust_list"	},
[5269] = { 3,	0,		printargs, "n64_get_robust_list"	},
[5270] = { 4,	0,		printargs, "n64_kexec_load"		},
[5271] = { 3,	0,		printargs, "n64_getcpu"		},
[5272] = { 6,	TD,		printargs, "n64_epoll_pwait"		},
[5273] = { 3,	0,		printargs, "n64_ioprio_set"		},
[5274] = { 2,	0,		printargs, "n64_ioprio_get"		},
[5275] = { 4,	TD|TF,		printargs, "n64_utimensat"		},
[5276] = { 3,	TD|TS,		printargs, "n64_signalfd"		},
[5277] = { 4,	TD,		printargs, "n64_timerfd"		},
[5278] = { 1,	TD,		printargs, "n64_eventfd"		},
[5279] = { 4,	TD,		printargs, "n64_fallocate"		},
[5280] = { 2,	TD,		printargs, "n64_timerfd_create"	},
[5281] = { 2,	TD,		printargs, "n64_timerfd_gettime"	},
[5282] = { 4,	TD,		printargs, "n64_timerfd_settime"	},
[5283] = { 4,	TD|TS,		printargs, "n64_signalfd4"		},
[5284] = { 2,	TD,		printargs, "n64_eventfd2"		},
[5285] = { 1,	TD,		printargs, "n64_epoll_create1"		},
[5286] = { 3,	TD,		printargs, "n64_dup3"			},
[5287] = { 2,	TD,		printargs, "n64_pipe2"			},
[5288] = { 1,	TD,		printargs, "n64_inotify_init1"		},
[5289] = { 4,	TD,		printargs, "n64_preadv"		},
[5290] = { 4,	TD,		printargs, "n64_pwritev"		},
[5291] = { 4,	TP|TS,		printargs, "n64_rt_tgsigqueueinfo"	},
[5292] = { 5,	TD,		printargs, "n64_perf_event_open"	},
[5293] = { 4,	TN,		printargs, "n64_accept4"		},
[5294] = { 5,	TN,		printargs, "n64_recvmmsg"		},
[5295] = { 2,	TD,		printargs, "n64_fanotify_init"		},
[5296] = { 5,	TD|TF,		printargs, "n64_fanotify_mark"		},
[5297] = { 4,	0,		printargs, "n64_prlimit64"		},
[5298] = { 5,	TD|TF,		printargs, "n64_name_to_handle_at"	},
[5299] = { 3,	TD,		printargs, "n64_open_by_handle_at"	},
[5300] = { 2,	0,		printargs, "n64_clock_adjtime"		},
[5301] = { 1,	TD,		printargs, "n64_syncfs"		},
[5302] = { 4,	TN,		printargs, "n64_sendmmsg"		},
[5303] = { 2,	TD,		printargs, "n64_setns"			},
[5304] = { 6,	0,		printargs, "n64_process_vm_readv"	},
[5305] = { 6,	0,		printargs, "n64_process_vm_writev"	},
[5306] = { 5,	0,		printargs, "n64_kcmp"			},
[5307] = { 3,	TD,		printargs, "n64_finit_module"		},
[5308] = { 3,	TD,		printargs, "n64_getdents64"		},
[5309] = { 3,	0,		printargs, "n64_sched_setattr"		},
[5310] = { 4,	0,		printargs, "n64_sched_getattr"		},
[5311] = { 5,	TD|TF,		printargs, "n64_renameat2"		},
[5312] = { 3,	0,		printargs, "n64_seccomp",		},
[5313] = { 3,	0,		printargs, "n64_getrandom",		},
[5314] = { 2,	TD,		printargs, "n64_memfd_create",		},
[5315] = { 3,	TD,		printargs, "n64_bpf",			},
[5316] = { 5,	TD|TF|TP|SE|SI,	printargs, "n64_execveat",		},
[5317 ... 5399] = { },
