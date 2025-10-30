int __fastcall sub_D1748(int *a1, int a2, int a3)
{
  int v6; // r0
  int v7; // r3
  int v8; // r5
  void (__fastcall *v9)(int *); // r2

  if ( (*(_DWORD *)(*a1 + 12) & 2) != 0 && a3 >= 0 && (*(int (__fastcall **)(int *, int))(*a1 + 44))(a1, 3) )
  {
    v6 = (*(int (__fastcall **)(int *, int))(*a1 + 24))(a1, a2);
    v7 = *a1;
    v8 = v6;
    v9 = *(void (__fastcall **)(int *))(*a1 + 32);
    if ( v9 )
    {
      v9(a1);
      sub_D8DA4(a1, 2);
      v7 = *a1;
    }
    sub_E07F8(a1[3], *(_DWORD *)(v7 + 40));
    return v8;
  }
  else
  {
    sub_D0048(6, 174, 178, (int)"crypto/evp/digest.c", 210);
    return 0;
  }
}
