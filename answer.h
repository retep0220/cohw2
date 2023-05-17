#define macro_baseline_cycle_count  baseline_cycle_count = arith_cnt * 4 + lw_cnt * 5 + sw_cnt * 4 + others_cnt * 3;
#define macro_baseline_cpu_time baseline_cpu_time = baseline_cycle_count * cycle_time;
#define macro_improved_cycle_count improved_cycle_count = arith_cnt * 4 + lw_cnt * 5 + sw_cnt * 4 + others_cnt * 3;
#define macro_improved_cpu_time improved_cpu_time = improved_cycle_count * cycle_time;
