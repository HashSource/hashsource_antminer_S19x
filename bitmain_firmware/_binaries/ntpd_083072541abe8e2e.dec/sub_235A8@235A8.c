int sub_235A8()
{
  unsigned __int16 v0; // r12
  unsigned int v1; // r2

  if ( sys_peer )
  {
    v0 = *(unsigned __int8 *)(sys_peer + 90);
    if ( *(_BYTE *)(sys_peer + 90) )
    {
      v0 = (v0 << 8) & 0x3F00;
    }
    else
    {
      v1 = *(unsigned __int8 *)(sys_peer + 88);
      if ( v1 <= 0x2E )
        v0 = (*((unsigned __int8 *)&dword_93B9C[10] + v1) << 8) & 0x3F00;
    }
  }
  else
  {
    v0 = 0;
  }
  return v0
       | byte_B98DE & 0xF
       | (unsigned __int16)((unsigned __int8)sys_leap << 14)
       | (unsigned __int8)(16 * byte_B98DF);
}
