int __fastcall sub_4DB70(int a1, _DWORD *a2)
{
  char *v4; // r0
  _DWORD v5[2]; // [sp+0h] [bp-80h] BYREF
  __int16 v6; // [sp+8h] [bp-78h]
  int v7; // [sp+Ch] [bp-74h]

  if ( !sub_45768(dword_4878EC, dword_4878F0, dword_4878F4, v5) )
    return 0;
  if ( v5[0] != 5 )
    return 0;
  if ( v6 != 4 )
    return 0;
  v4 = sub_4D77C();
  if ( !v4 || !v4[2] || v5[1] >= 0 )
    return 0;
  *a2 = v7;
  return 1;
}
