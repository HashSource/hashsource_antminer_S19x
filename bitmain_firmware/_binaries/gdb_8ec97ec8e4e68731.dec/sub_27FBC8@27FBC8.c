int __fastcall sub_27FBC8(int a1)
{
  int v1; // r3
  int v3; // r0
  int v5; // r5
  int i; // r0
  int v7; // r0

  v1 = *(_DWORD *)a1;
  if ( (*(_DWORD *)a1 & 1) != 0 )
  {
    v3 = *(_DWORD *)(a1 + 28);
  }
  else
  {
    v7 = sub_27EE64(*(_DWORD *)(a1 + 20));
    if ( v7 < 0 )
      sub_29121C();
    v3 = sub_27F46C(v7, *(int **)(a1 + 12), *(_DWORD *)(a1 + 4));
    v1 = *(_DWORD *)a1 | 1;
    *(_DWORD *)a1 = v1;
  }
  if ( v3 == -3 )
  {
    if ( dword_48B6B8 )
      sub_291120(dword_48B6B8);
    if ( dword_48AAD8 )
      *(_DWORD *)(dword_48AAD8 + 28) = -3;
    return -3;
  }
  v5 = sub_27FA98(v3, *(int **)(a1 + 16), *(_DWORD *)(a1 + 20), v1 & 2);
  if ( dword_48B6B8 )
    sub_291120(dword_48B6B8);
  if ( v5 )
  {
    if ( v5 == -3 )
    {
      if ( dword_48AAD8 )
        *(_DWORD *)(dword_48AAD8 + 28) = -3;
      return -3;
    }
    dword_48AAD8 = *(_DWORD *)(a1 + 24);
    if ( dword_48AAD8 )
      *(_DWORD *)(dword_48AAD8 + 28) = v5;
    sub_297758(a1);
    return v5;
  }
  else
  {
    for ( i = dword_48AAD8; dword_48AAD8; i = dword_48AAD8 )
    {
      dword_48AAD8 = *(_DWORD *)(i + 24);
      sub_297758(i);
    }
    dword_48AAA0 &= ~0x200000u;
    return 0;
  }
}
