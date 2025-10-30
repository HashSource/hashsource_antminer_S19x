int __fastcall sub_1E61E4(int a1, int *a2)
{
  int v2; // r4
  int v4; // r0
  int v5; // r0
  _DWORD *v6; // r5
  _BOOL4 v7; // r6
  int v8; // r6
  int result; // r0
  void *v10; // [sp+Ch] [bp-18h] BYREF
  signed int v11; // [sp+10h] [bp-14h] BYREF
  char s[16]; // [sp+14h] [bp-10h] BYREF

  v2 = a1;
  v4 = sub_16F654(a1);
  v5 = ((int (__fastcall *)(int))loc_1E2770)(v4);
  v6 = (_DWORD *)dword_488C94;
  if ( v2 )
  {
    if ( *(_BYTE *)(v2 + 16) )
      v2 = 0;
    else
      v2 = *(_DWORD *)(v2 + 12);
  }
  v10 = *(void **)dword_488C94;
  v11 = sub_1E2890(v5) - 1;
  if ( ((int (__fastcall *)(int))loc_1E2198)(10) == 2 )
    return 0;
  v7 = v6[106] == v2;
  if ( v6[106] == -1 )
    v7 = 0;
  if ( v7 )
    return 0;
  sub_1E1694(&v10, &v11, "vFile:setfs:");
  sub_93170(s, 9u, "%x", v2);
  sub_1E1694(&v10, &v11, s);
  v8 = sub_1E6030((int)v10 - *v6, 10, a2, 0, 0);
  if ( ((int (__fastcall *)(int))loc_1E2198)(10) == 2 )
    return 0;
  result = v8;
  if ( !v8 )
    v6[106] = v2;
  return result;
}
