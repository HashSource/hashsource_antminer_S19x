unsigned __int64 vip_get_isp_clk()
{
  unsigned __int64 v0; // x1

  v0 = *(unsigned int *)qword_41D8;
  __dsb(0xDu);
  return (((v0 >> 18) & 1) << 18) & 0xFFC7FFFF
       | (((v0 >> 19) & 1) << 19) & 0xFFCFFFFF
       | (((v0 >> 20) & 1) << 20) & 0xFFDFFFFF
       | (((unsigned int)(v0 >> 21) & 1) << 21);
}
