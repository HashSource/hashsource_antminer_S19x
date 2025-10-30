int sub_29297C()
{
  int v0; // r3
  int result; // r0
  int v2; // r2
  int v3; // [sp+4h] [bp-4h]

  v0 = dword_48B6F4;
  if ( !dword_48B6F4 )
    return 0;
  while ( 1 )
  {
    result = *(unsigned __int8 *)(v0 + dword_48B6F0);
    if ( *(_BYTE *)(v0 + dword_48B6F0) )
      break;
    sub_292904();
    v0 = dword_48B6F4;
    if ( !dword_48B6F4 )
      return 0;
  }
  v2 = ++dword_48B6F0;
  if ( (dword_48AAA0 & 0x80000) != 0 && (dword_48AAA0 & 0x48) != 0 && !*(_BYTE *)(v0 + v2) )
  {
    v3 = result;
    sub_292904();
    return v3;
  }
  return result;
}
