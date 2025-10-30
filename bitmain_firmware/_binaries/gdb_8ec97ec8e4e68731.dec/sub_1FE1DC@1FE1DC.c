int __fastcall sub_1FE1DC(_DWORD *a1)
{
  const char **v2; // r5
  int v3; // r3
  _DWORD *v4; // r0
  int *v6; // r0
  int v7[3]; // [sp+0h] [bp-Ch] BYREF

  v2 = sub_1FD680("pipe");
  if ( v2 )
  {
    v3 = sub_3BC90((int)v7);
    if ( v3 != -1 )
    {
      *a1 = sub_1FD6F4(v7[0], v2);
      v4 = sub_1FD6F4(v7[1], v2);
      v3 = 0;
      a1[1] = v4;
    }
  }
  else
  {
    v6 = _errno_location();
    v3 = -1;
    *v6 = 38;
  }
  return v3;
}
