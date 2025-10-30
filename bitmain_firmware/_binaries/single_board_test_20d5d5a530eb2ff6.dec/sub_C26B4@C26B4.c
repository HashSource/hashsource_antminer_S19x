int __fastcall sub_C26B4(int a1, int a2)
{
  int v3; // r4
  int v4; // r0
  bool v5; // zf
  int v6; // r2

  v3 = sub_C59B8(*(_DWORD *)(a1 + 24));
  v4 = sub_C59B8(*(_DWORD *)(a2 + 24));
  v5 = v4 == 0;
  if ( v4 )
    v5 = v3 == 0;
  v6 = v5;
  if ( v5 )
    return -2;
  else
    return sub_C6F78(v3, v4, v6) == 0;
}
