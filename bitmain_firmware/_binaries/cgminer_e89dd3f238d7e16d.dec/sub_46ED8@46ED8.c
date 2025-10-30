int __fastcall sub_46ED8(int a1, const void *a2, size_t a3, const void *a4, int a5, size_t a6)
{
  int v6; // r3
  int v7; // r3
  int v12; // [sp+14h] [bp-10h]
  int v13; // [sp+18h] [bp-Ch]
  int v14; // [sp+1Ch] [bp-8h]

  v12 = 0;
  v14 = a1;
  if ( a1 )
    v6 = *(_DWORD *)(a1 + 352);
  else
    v6 = 0;
  v13 = v6;
  while ( v14 )
  {
    if ( !memcmp((const void *)(v14 + 128), a2, a3) && !memcmp((const void *)(v14 + a5), a4, a6) )
      return v14;
    v14 = v13;
    if ( v13 )
      v7 = *(_DWORD *)(v13 + 352);
    else
      v7 = 0;
    v13 = v7;
  }
  return v12;
}
