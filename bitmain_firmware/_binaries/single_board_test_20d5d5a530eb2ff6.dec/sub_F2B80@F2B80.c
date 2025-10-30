int __fastcall sub_F2B80(int a1, int a2, size_t a3, char *a4)
{
  int v8; // r0
  int v10; // r8
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  size_t n; // [sp+4h] [bp-4h] BYREF

  v8 = sub_DB984(a1);
  if ( a2 == 1 )
    return 1;
  if ( a2 < 1 || (unsigned int)(a2 - 6) > 1 )
    return -2;
  v10 = v8;
  if ( a2 == 6 )
  {
    n = a3;
  }
  else
  {
    v11 = (_DWORD *)sub_DB988(a1);
    a4 = (char *)sub_D9FA8(v11, &n);
  }
  if ( !a4 || n != 32 || !sub_1280A4(v10, a4, 0x20u) )
    return 0;
  v12 = (_DWORD *)sub_AE2B4(v10);
  sub_F1804((_DWORD *)(v10 + 16), v12);
  return 1;
}
