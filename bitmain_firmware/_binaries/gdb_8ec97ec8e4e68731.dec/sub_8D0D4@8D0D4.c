int __fastcall sub_8D0D4(const char *a1, int a2)
{
  int v2; // r5
  int result; // r0
  __int64 v4; // r0
  __int64 v5; // r0
  int v6; // [sp+8h] [bp-14h] BYREF
  const char *v7; // [sp+Ch] [bp-10h] BYREF
  int v8[2]; // [sp+10h] [bp-Ch] BYREF

  v7 = a1;
  v6 = a2;
  sub_8D040(&v7, &v6);
  sub_21D6B0(v8, v7, v6, 2, 0);
  v2 = v8[0];
  if ( v8[0] )
  {
    sub_8D084(v8[0], v8[1]);
    return *(_DWORD *)(v2 + 24);
  }
  else
  {
    v4 = *(_QWORD *)*(_DWORD *)(*(_DWORD *)(dword_4751A0 + 72) + 4);
    result = sub_170CD8(v4, HIDWORD(v4), v7, 0, 1);
    if ( !result )
    {
      v5 = *(_QWORD *)*(_DWORD *)(*(_DWORD *)(dword_4751A0 + 72) + 4);
      return sub_1946C8(v5, HIDWORD(v5), v7);
    }
  }
  return result;
}
