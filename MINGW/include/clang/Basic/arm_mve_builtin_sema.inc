case ARM::BI__builtin_arm_mve_vldrwq_gather_base_f32:
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_s32:
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_u32:
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_f32:
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_s32:
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_u32:
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_z_f32:
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_z_s32:
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_wb_z_u32:
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_z_f32:
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_z_s32:
case ARM::BI__builtin_arm_mve_vldrwq_gather_base_z_u32:
case ARM::BI__builtin_arm_mve_vstrwq_scatter_base_f32:
case ARM::BI__builtin_arm_mve_vstrwq_scatter_base_p_f32:
case ARM::BI__builtin_arm_mve_vstrwq_scatter_base_p_s32:
case ARM::BI__builtin_arm_mve_vstrwq_scatter_base_p_u32:
case ARM::BI__builtin_arm_mve_vstrwq_scatter_base_s32:
case ARM::BI__builtin_arm_mve_vstrwq_scatter_base_u32:
case ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_f32:
case ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_p_f32:
case ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_p_s32:
case ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_p_u32:
case ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_s32:
case ARM::BI__builtin_arm_mve_vstrwq_scatter_base_wb_u32:
  return SemaBuiltinConstantArgRange(TheCall, 1, -0x1FC, 0x1FC) ||
         SemaBuiltinConstantArgMultiple(TheCall, 1, 4);
case ARM::BI__builtin_arm_mve_vldrdq_gather_base_s64:
case ARM::BI__builtin_arm_mve_vldrdq_gather_base_u64:
case ARM::BI__builtin_arm_mve_vldrdq_gather_base_wb_s64:
case ARM::BI__builtin_arm_mve_vldrdq_gather_base_wb_u64:
case ARM::BI__builtin_arm_mve_vldrdq_gather_base_wb_z_s64:
case ARM::BI__builtin_arm_mve_vldrdq_gather_base_wb_z_u64:
case ARM::BI__builtin_arm_mve_vldrdq_gather_base_z_s64:
case ARM::BI__builtin_arm_mve_vldrdq_gather_base_z_u64:
case ARM::BI__builtin_arm_mve_vstrdq_scatter_base_p_s64:
case ARM::BI__builtin_arm_mve_vstrdq_scatter_base_p_u64:
case ARM::BI__builtin_arm_mve_vstrdq_scatter_base_s64:
case ARM::BI__builtin_arm_mve_vstrdq_scatter_base_u64:
case ARM::BI__builtin_arm_mve_vstrdq_scatter_base_wb_p_s64:
case ARM::BI__builtin_arm_mve_vstrdq_scatter_base_wb_p_u64:
case ARM::BI__builtin_arm_mve_vstrdq_scatter_base_wb_s64:
case ARM::BI__builtin_arm_mve_vstrdq_scatter_base_wb_u64:
  return SemaBuiltinConstantArgRange(TheCall, 1, -0x3F8, 0x3F8) ||
         SemaBuiltinConstantArgMultiple(TheCall, 1, 8);
case ARM::BI__builtin_arm_mve_vgetq_lane_s64:
case ARM::BI__builtin_arm_mve_vgetq_lane_u64:
  return SemaBuiltinConstantArgRange(TheCall, 1, 0x0, 0x1);
case ARM::BI__builtin_arm_mve_vqshlq_n_s32:
case ARM::BI__builtin_arm_mve_vqshlq_n_u32:
case ARM::BI__builtin_arm_mve_vqshluq_n_s32:
case ARM::BI__builtin_arm_mve_vshlq_n_s32:
case ARM::BI__builtin_arm_mve_vshlq_n_u32:
case ARM::BI__builtin_arm_mve_vshlq_x_n_s32:
case ARM::BI__builtin_arm_mve_vshlq_x_n_u32:
  return SemaBuiltinConstantArgRange(TheCall, 1, 0x0, 0x1F);
case ARM::BI__builtin_arm_mve_vgetq_lane_f32:
case ARM::BI__builtin_arm_mve_vgetq_lane_s32:
case ARM::BI__builtin_arm_mve_vgetq_lane_u32:
  return SemaBuiltinConstantArgRange(TheCall, 1, 0x0, 0x3);
case ARM::BI__builtin_arm_mve_vgetq_lane_f16:
case ARM::BI__builtin_arm_mve_vgetq_lane_s16:
case ARM::BI__builtin_arm_mve_vgetq_lane_u16:
case ARM::BI__builtin_arm_mve_vqshlq_n_s8:
case ARM::BI__builtin_arm_mve_vqshlq_n_u8:
case ARM::BI__builtin_arm_mve_vqshluq_n_s8:
case ARM::BI__builtin_arm_mve_vshlq_n_s8:
case ARM::BI__builtin_arm_mve_vshlq_n_u8:
case ARM::BI__builtin_arm_mve_vshlq_x_n_s8:
case ARM::BI__builtin_arm_mve_vshlq_x_n_u8:
  return SemaBuiltinConstantArgRange(TheCall, 1, 0x0, 0x7);
case ARM::BI__builtin_arm_mve_vgetq_lane_s8:
case ARM::BI__builtin_arm_mve_vgetq_lane_u8:
case ARM::BI__builtin_arm_mve_vqshlq_n_s16:
case ARM::BI__builtin_arm_mve_vqshlq_n_u16:
case ARM::BI__builtin_arm_mve_vqshluq_n_s16:
case ARM::BI__builtin_arm_mve_vshlq_n_s16:
case ARM::BI__builtin_arm_mve_vshlq_n_u16:
case ARM::BI__builtin_arm_mve_vshlq_x_n_s16:
case ARM::BI__builtin_arm_mve_vshlq_x_n_u16:
  return SemaBuiltinConstantArgRange(TheCall, 1, 0x0, 0xF);
case ARM::BI__builtin_arm_mve_vrshrq_n_s16:
case ARM::BI__builtin_arm_mve_vrshrq_n_u16:
case ARM::BI__builtin_arm_mve_vrshrq_x_n_s16:
case ARM::BI__builtin_arm_mve_vrshrq_x_n_u16:
case ARM::BI__builtin_arm_mve_vshllbq_n_s16:
case ARM::BI__builtin_arm_mve_vshllbq_n_u16:
case ARM::BI__builtin_arm_mve_vshllbq_x_n_s16:
case ARM::BI__builtin_arm_mve_vshllbq_x_n_u16:
case ARM::BI__builtin_arm_mve_vshlltq_n_s16:
case ARM::BI__builtin_arm_mve_vshlltq_n_u16:
case ARM::BI__builtin_arm_mve_vshlltq_x_n_s16:
case ARM::BI__builtin_arm_mve_vshlltq_x_n_u16:
case ARM::BI__builtin_arm_mve_vshrq_n_s16:
case ARM::BI__builtin_arm_mve_vshrq_n_u16:
case ARM::BI__builtin_arm_mve_vshrq_x_n_s16:
case ARM::BI__builtin_arm_mve_vshrq_x_n_u16:
  return SemaBuiltinConstantArgRange(TheCall, 1, 0x1, 0x10);
case ARM::BI__builtin_arm_mve_sqshl:
case ARM::BI__builtin_arm_mve_sqshll:
case ARM::BI__builtin_arm_mve_srshr:
case ARM::BI__builtin_arm_mve_srshrl:
case ARM::BI__builtin_arm_mve_uqshl:
case ARM::BI__builtin_arm_mve_uqshll:
case ARM::BI__builtin_arm_mve_urshr:
case ARM::BI__builtin_arm_mve_urshrl:
case ARM::BI__builtin_arm_mve_vrshrq_n_s32:
case ARM::BI__builtin_arm_mve_vrshrq_n_u32:
case ARM::BI__builtin_arm_mve_vrshrq_x_n_s32:
case ARM::BI__builtin_arm_mve_vrshrq_x_n_u32:
case ARM::BI__builtin_arm_mve_vshrq_n_s32:
case ARM::BI__builtin_arm_mve_vshrq_n_u32:
case ARM::BI__builtin_arm_mve_vshrq_x_n_s32:
case ARM::BI__builtin_arm_mve_vshrq_x_n_u32:
  return SemaBuiltinConstantArgRange(TheCall, 1, 0x1, 0x20);
case ARM::BI__builtin_arm_mve_vrshrq_n_s8:
case ARM::BI__builtin_arm_mve_vrshrq_n_u8:
case ARM::BI__builtin_arm_mve_vrshrq_x_n_s8:
case ARM::BI__builtin_arm_mve_vrshrq_x_n_u8:
case ARM::BI__builtin_arm_mve_vshllbq_n_s8:
case ARM::BI__builtin_arm_mve_vshllbq_n_u8:
case ARM::BI__builtin_arm_mve_vshllbq_x_n_s8:
case ARM::BI__builtin_arm_mve_vshllbq_x_n_u8:
case ARM::BI__builtin_arm_mve_vshlltq_n_s8:
case ARM::BI__builtin_arm_mve_vshlltq_n_u8:
case ARM::BI__builtin_arm_mve_vshlltq_x_n_s8:
case ARM::BI__builtin_arm_mve_vshlltq_x_n_u8:
case ARM::BI__builtin_arm_mve_vshrq_n_s8:
case ARM::BI__builtin_arm_mve_vshrq_n_u8:
case ARM::BI__builtin_arm_mve_vshrq_x_n_s8:
case ARM::BI__builtin_arm_mve_vshrq_x_n_u8:
  return SemaBuiltinConstantArgRange(TheCall, 1, 0x1, 0x8);
case ARM::BI__builtin_arm_mve_vsetq_lane_s64:
case ARM::BI__builtin_arm_mve_vsetq_lane_u64:
  return SemaBuiltinConstantArgRange(TheCall, 2, 0x0, 0x1);
case ARM::BI__builtin_arm_mve_vqshlq_m_n_s32:
case ARM::BI__builtin_arm_mve_vqshlq_m_n_u32:
case ARM::BI__builtin_arm_mve_vqshluq_m_n_s32:
case ARM::BI__builtin_arm_mve_vshlq_m_n_s32:
case ARM::BI__builtin_arm_mve_vshlq_m_n_u32:
case ARM::BI__builtin_arm_mve_vsliq_m_n_s32:
case ARM::BI__builtin_arm_mve_vsliq_m_n_u32:
case ARM::BI__builtin_arm_mve_vsliq_n_s32:
case ARM::BI__builtin_arm_mve_vsliq_n_u32:
  return SemaBuiltinConstantArgRange(TheCall, 2, 0x0, 0x1F);
case ARM::BI__builtin_arm_mve_vsetq_lane_f32:
case ARM::BI__builtin_arm_mve_vsetq_lane_s32:
case ARM::BI__builtin_arm_mve_vsetq_lane_u32:
  return SemaBuiltinConstantArgRange(TheCall, 2, 0x0, 0x3);
case ARM::BI__builtin_arm_mve_vqshlq_m_n_s8:
case ARM::BI__builtin_arm_mve_vqshlq_m_n_u8:
case ARM::BI__builtin_arm_mve_vqshluq_m_n_s8:
case ARM::BI__builtin_arm_mve_vsetq_lane_f16:
case ARM::BI__builtin_arm_mve_vsetq_lane_s16:
case ARM::BI__builtin_arm_mve_vsetq_lane_u16:
case ARM::BI__builtin_arm_mve_vshlq_m_n_s8:
case ARM::BI__builtin_arm_mve_vshlq_m_n_u8:
case ARM::BI__builtin_arm_mve_vsliq_m_n_s8:
case ARM::BI__builtin_arm_mve_vsliq_m_n_u8:
case ARM::BI__builtin_arm_mve_vsliq_n_s8:
case ARM::BI__builtin_arm_mve_vsliq_n_u8:
  return SemaBuiltinConstantArgRange(TheCall, 2, 0x0, 0x7);
case ARM::BI__builtin_arm_mve_vqshlq_m_n_s16:
case ARM::BI__builtin_arm_mve_vqshlq_m_n_u16:
case ARM::BI__builtin_arm_mve_vqshluq_m_n_s16:
case ARM::BI__builtin_arm_mve_vsetq_lane_s8:
case ARM::BI__builtin_arm_mve_vsetq_lane_u8:
case ARM::BI__builtin_arm_mve_vshlq_m_n_s16:
case ARM::BI__builtin_arm_mve_vshlq_m_n_u16:
case ARM::BI__builtin_arm_mve_vsliq_m_n_s16:
case ARM::BI__builtin_arm_mve_vsliq_m_n_u16:
case ARM::BI__builtin_arm_mve_vsliq_n_s16:
case ARM::BI__builtin_arm_mve_vsliq_n_u16:
  return SemaBuiltinConstantArgRange(TheCall, 2, 0x0, 0xF);
case ARM::BI__builtin_arm_mve_vqrshrnbq_m_n_s32:
case ARM::BI__builtin_arm_mve_vqrshrnbq_m_n_u32:
case ARM::BI__builtin_arm_mve_vqrshrnbq_n_s32:
case ARM::BI__builtin_arm_mve_vqrshrnbq_n_u32:
case ARM::BI__builtin_arm_mve_vqrshrntq_m_n_s32:
case ARM::BI__builtin_arm_mve_vqrshrntq_m_n_u32:
case ARM::BI__builtin_arm_mve_vqrshrntq_n_s32:
case ARM::BI__builtin_arm_mve_vqrshrntq_n_u32:
case ARM::BI__builtin_arm_mve_vqrshrunbq_m_n_s32:
case ARM::BI__builtin_arm_mve_vqrshrunbq_n_s32:
case ARM::BI__builtin_arm_mve_vqrshruntq_m_n_s32:
case ARM::BI__builtin_arm_mve_vqrshruntq_n_s32:
case ARM::BI__builtin_arm_mve_vqshrnbq_m_n_s32:
case ARM::BI__builtin_arm_mve_vqshrnbq_m_n_u32:
case ARM::BI__builtin_arm_mve_vqshrnbq_n_s32:
case ARM::BI__builtin_arm_mve_vqshrnbq_n_u32:
case ARM::BI__builtin_arm_mve_vqshrntq_m_n_s32:
case ARM::BI__builtin_arm_mve_vqshrntq_m_n_u32:
case ARM::BI__builtin_arm_mve_vqshrntq_n_s32:
case ARM::BI__builtin_arm_mve_vqshrntq_n_u32:
case ARM::BI__builtin_arm_mve_vqshrunbq_m_n_s32:
case ARM::BI__builtin_arm_mve_vqshrunbq_n_s32:
case ARM::BI__builtin_arm_mve_vqshruntq_m_n_s32:
case ARM::BI__builtin_arm_mve_vqshruntq_n_s32:
case ARM::BI__builtin_arm_mve_vrshrnbq_m_n_s32:
case ARM::BI__builtin_arm_mve_vrshrnbq_m_n_u32:
case ARM::BI__builtin_arm_mve_vrshrnbq_n_s32:
case ARM::BI__builtin_arm_mve_vrshrnbq_n_u32:
case ARM::BI__builtin_arm_mve_vrshrntq_m_n_s32:
case ARM::BI__builtin_arm_mve_vrshrntq_m_n_u32:
case ARM::BI__builtin_arm_mve_vrshrntq_n_s32:
case ARM::BI__builtin_arm_mve_vrshrntq_n_u32:
case ARM::BI__builtin_arm_mve_vrshrq_m_n_s16:
case ARM::BI__builtin_arm_mve_vrshrq_m_n_u16:
case ARM::BI__builtin_arm_mve_vshllbq_m_n_s16:
case ARM::BI__builtin_arm_mve_vshllbq_m_n_u16:
case ARM::BI__builtin_arm_mve_vshlltq_m_n_s16:
case ARM::BI__builtin_arm_mve_vshlltq_m_n_u16:
case ARM::BI__builtin_arm_mve_vshrnbq_m_n_s32:
case ARM::BI__builtin_arm_mve_vshrnbq_m_n_u32:
case ARM::BI__builtin_arm_mve_vshrnbq_n_s32:
case ARM::BI__builtin_arm_mve_vshrnbq_n_u32:
case ARM::BI__builtin_arm_mve_vshrntq_m_n_s32:
case ARM::BI__builtin_arm_mve_vshrntq_m_n_u32:
case ARM::BI__builtin_arm_mve_vshrntq_n_s32:
case ARM::BI__builtin_arm_mve_vshrntq_n_u32:
case ARM::BI__builtin_arm_mve_vshrq_m_n_s16:
case ARM::BI__builtin_arm_mve_vshrq_m_n_u16:
case ARM::BI__builtin_arm_mve_vsriq_m_n_s16:
case ARM::BI__builtin_arm_mve_vsriq_m_n_u16:
case ARM::BI__builtin_arm_mve_vsriq_n_s16:
case ARM::BI__builtin_arm_mve_vsriq_n_u16:
  return SemaBuiltinConstantArgRange(TheCall, 2, 0x1, 0x10);
case ARM::BI__builtin_arm_mve_vrshrq_m_n_s32:
case ARM::BI__builtin_arm_mve_vrshrq_m_n_u32:
case ARM::BI__builtin_arm_mve_vshrq_m_n_s32:
case ARM::BI__builtin_arm_mve_vshrq_m_n_u32:
case ARM::BI__builtin_arm_mve_vsriq_m_n_s32:
case ARM::BI__builtin_arm_mve_vsriq_m_n_u32:
case ARM::BI__builtin_arm_mve_vsriq_n_s32:
case ARM::BI__builtin_arm_mve_vsriq_n_u32:
  return SemaBuiltinConstantArgRange(TheCall, 2, 0x1, 0x20);
case ARM::BI__builtin_arm_mve_vqrshrnbq_m_n_s16:
case ARM::BI__builtin_arm_mve_vqrshrnbq_m_n_u16:
case ARM::BI__builtin_arm_mve_vqrshrnbq_n_s16:
case ARM::BI__builtin_arm_mve_vqrshrnbq_n_u16:
case ARM::BI__builtin_arm_mve_vqrshrntq_m_n_s16:
case ARM::BI__builtin_arm_mve_vqrshrntq_m_n_u16:
case ARM::BI__builtin_arm_mve_vqrshrntq_n_s16:
case ARM::BI__builtin_arm_mve_vqrshrntq_n_u16:
case ARM::BI__builtin_arm_mve_vqrshrunbq_m_n_s16:
case ARM::BI__builtin_arm_mve_vqrshrunbq_n_s16:
case ARM::BI__builtin_arm_mve_vqrshruntq_m_n_s16:
case ARM::BI__builtin_arm_mve_vqrshruntq_n_s16:
case ARM::BI__builtin_arm_mve_vqshrnbq_m_n_s16:
case ARM::BI__builtin_arm_mve_vqshrnbq_m_n_u16:
case ARM::BI__builtin_arm_mve_vqshrnbq_n_s16:
case ARM::BI__builtin_arm_mve_vqshrnbq_n_u16:
case ARM::BI__builtin_arm_mve_vqshrntq_m_n_s16:
case ARM::BI__builtin_arm_mve_vqshrntq_m_n_u16:
case ARM::BI__builtin_arm_mve_vqshrntq_n_s16:
case ARM::BI__builtin_arm_mve_vqshrntq_n_u16:
case ARM::BI__builtin_arm_mve_vqshrunbq_m_n_s16:
case ARM::BI__builtin_arm_mve_vqshrunbq_n_s16:
case ARM::BI__builtin_arm_mve_vqshruntq_m_n_s16:
case ARM::BI__builtin_arm_mve_vqshruntq_n_s16:
case ARM::BI__builtin_arm_mve_vrshrnbq_m_n_s16:
case ARM::BI__builtin_arm_mve_vrshrnbq_m_n_u16:
case ARM::BI__builtin_arm_mve_vrshrnbq_n_s16:
case ARM::BI__builtin_arm_mve_vrshrnbq_n_u16:
case ARM::BI__builtin_arm_mve_vrshrntq_m_n_s16:
case ARM::BI__builtin_arm_mve_vrshrntq_m_n_u16:
case ARM::BI__builtin_arm_mve_vrshrntq_n_s16:
case ARM::BI__builtin_arm_mve_vrshrntq_n_u16:
case ARM::BI__builtin_arm_mve_vrshrq_m_n_s8:
case ARM::BI__builtin_arm_mve_vrshrq_m_n_u8:
case ARM::BI__builtin_arm_mve_vshllbq_m_n_s8:
case ARM::BI__builtin_arm_mve_vshllbq_m_n_u8:
case ARM::BI__builtin_arm_mve_vshlltq_m_n_s8:
case ARM::BI__builtin_arm_mve_vshlltq_m_n_u8:
case ARM::BI__builtin_arm_mve_vshrnbq_m_n_s16:
case ARM::BI__builtin_arm_mve_vshrnbq_m_n_u16:
case ARM::BI__builtin_arm_mve_vshrnbq_n_s16:
case ARM::BI__builtin_arm_mve_vshrnbq_n_u16:
case ARM::BI__builtin_arm_mve_vshrntq_m_n_s16:
case ARM::BI__builtin_arm_mve_vshrntq_m_n_u16:
case ARM::BI__builtin_arm_mve_vshrntq_n_s16:
case ARM::BI__builtin_arm_mve_vshrntq_n_u16:
case ARM::BI__builtin_arm_mve_vshrq_m_n_s8:
case ARM::BI__builtin_arm_mve_vshrq_m_n_u8:
case ARM::BI__builtin_arm_mve_vsriq_m_n_s8:
case ARM::BI__builtin_arm_mve_vsriq_m_n_u8:
case ARM::BI__builtin_arm_mve_vsriq_n_s8:
case ARM::BI__builtin_arm_mve_vsriq_n_u8:
  return SemaBuiltinConstantArgRange(TheCall, 2, 0x1, 0x8);