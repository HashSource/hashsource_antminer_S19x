int sub_2389C()
{
  unsigned __int16 v0; // r0
  unsigned int v1; // r3

  if ( !sys_peer )
  {
    v0 = 0;
    return byte_BA8DE & 0xF
         | (unsigned __int16)((unsigned __int8)sys_leap << 14)
         | (unsigned __int8)(16 * byte_BA8DF)
         | v0;
  }
  v0 = *(unsigned __int8 *)(sys_peer + 90);
  if ( *(_BYTE *)(sys_peer + 90) )
    goto LABEL_5;
  v1 = *(unsigned __int8 *)(sys_peer + 88);
  if ( v1 <= 0x2E )
  {
    v0 = *((unsigned __int8 *)&dword_950F8[10] + v1);
LABEL_5:
    v0 = (v0 << 8) & 0x3F00;
  }
  return byte_BA8DE & 0xF
       | (unsigned __int16)((unsigned __int8)sys_leap << 14)
       | (unsigned __int8)(16 * byte_BA8DF)
       | v0;
}
