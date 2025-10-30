int sub_24858()
{
  int v0; // r12
  char s; // [sp+8h] [bp-804h] BYREF

  v0 = dword_A0D94;
  if ( dword_A0D94 && (unsigned int)dword_9E31C > 3 )
  {
    snprintf(
      &s,
      0x800u,
      "pulse_mode = %d, ccdly_sel = %d, pwth_sel = %d\n",
      *(unsigned __int8 *)dword_A0D94,
      *(unsigned __int8 *)(dword_A0D94 + 2),
      *(unsigned __int8 *)(dword_A0D94 + 1));
    sub_47AB4(3, &s, 0);
    v0 = dword_A0D94;
  }
  return (unsigned __int8)*(_WORD *)v0
       | (unsigned __int16)((unsigned __int8)HIBYTE(*(_WORD *)v0) << 8)
       | (*(unsigned __int8 *)(v0 + 2) << 16);
}
