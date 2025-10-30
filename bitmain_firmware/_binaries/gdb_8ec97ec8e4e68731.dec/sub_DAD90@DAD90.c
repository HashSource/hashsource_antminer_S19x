int __fastcall sub_DAD90(int a1)
{
  int v2; // r0
  int v3; // r3
  bool v4; // zf
  void *v5; // r5
  int v6; // r0
  int result; // r0
  int v8; // r3
  int v9[2]; // [sp+34h] [bp-18h] BYREF
  int v10; // [sp+3Ch] [bp-10h] BYREF
  int v11; // [sp+40h] [bp-Ch] BYREF
  _DWORD v12[2]; // [sp+44h] [bp-8h] BYREF

  v9[0] = a1;
  v10 = 0;
  if ( a1 && !strncmp((const char *)a1, "-m", 2u) && isspace(*(unsigned __int8 *)(a1 + 2)) )
  {
    v2 = sub_19CC9C(&v11, v9, 1);
    v8 = v11;
    v11 = 0;
    v4 = v10 == 0;
    v10 = v8;
    if ( !v4 )
    {
      v2 = ((int (__fastcall *)(int *))loc_19D154)(&v10);
      if ( v11 )
        v2 = ((int (__fastcall *)(int *))loc_19D154)(&v11);
    }
    v5 = &unk_47864C;
  }
  else
  {
    v2 = sub_19DBE0(v12, v9, off_46D5A4[0], 0);
    v3 = v12[0];
    v12[0] = 0;
    v4 = v10 == 0;
    v10 = v3;
    if ( !v4 )
    {
      v2 = ((int (__fastcall *)(int *))loc_19D154)(&v10);
      if ( v12[0] )
        v2 = ((int (__fastcall *)(_DWORD *))loc_19D154)(v12);
    }
    v5 = &unk_4785BC;
  }
  v6 = sub_B894C(v2);
  result = sub_DA350(v6, v10, 0, 0, v9[0], 1, 0, 29, 0, dword_4788B0, (int)v5);
  if ( v10 )
    return ((int (__fastcall *)(int *))loc_19D154)(&v10);
  return result;
}
