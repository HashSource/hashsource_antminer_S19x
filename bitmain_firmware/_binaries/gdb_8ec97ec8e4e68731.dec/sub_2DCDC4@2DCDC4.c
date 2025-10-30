int __fastcall sub_2DCDC4(int a1)
{
  int v2; // r0
  int v3; // r6
  int v4; // r4
  void (*v5)(const char *, ...); // r3
  int v7; // r3

  v2 = *(_DWORD *)(a1 + 148);
  v3 = *(_DWORD *)(*(_DWORD *)(v2 + 160) + 64);
  v4 = *(_DWORD *)(*(_DWORD *)(v3 + 4 * sub_2D4B7C(v2, a1)) + 28);
  if ( v4 )
  {
    v7 = *(_DWORD *)(*(_DWORD *)(v3 + 4 * v4) + 44);
    return *(_DWORD *)(*(_DWORD *)(v7 + 60) + 28) + *(_DWORD *)(v7 + 56);
  }
  else
  {
    v5 = *(void (**)(const char *, ...))(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(a1 + 148) + 4) + 444) + 376);
    if ( v5 )
      v5("%B: warning: sh_link not set for section `%A'");
    return 0;
  }
}
