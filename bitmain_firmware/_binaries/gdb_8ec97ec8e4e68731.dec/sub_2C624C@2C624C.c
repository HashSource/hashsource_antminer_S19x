int __fastcall sub_2C624C(int result, int a2)
{
  int v2; // r3
  int v3; // r2
  int v4; // r2
  bool v5; // zf

  v2 = *(_DWORD *)(a2 + 28);
  if ( *(_DWORD *)(v2 + 44) == 4 && *(_DWORD *)(v2 + 380) == -1 )
  {
    v3 = *(_DWORD *)(result + 160);
    if ( *(_DWORD *)(v3 + 672) != 10 )
      goto LABEL_4;
    v4 = *(_DWORD *)(v3 + 684);
    v5 = v4 == 0;
    if ( v4 )
      v5 = v4 == 65;
    if ( v5 )
      *(_DWORD *)(v2 + 380) = 1;
    else
LABEL_4:
      *(_DWORD *)(v2 + 380) = 0;
  }
  return result;
}
