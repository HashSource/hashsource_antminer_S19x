int __fastcall sub_BE0D4(int a1, _DWORD *a2)
{
  __int64 v4; // r0
  char *v5; // r3
  unsigned int v6; // r2
  bool v7; // cc
  int v8; // r1
  int (__fastcall *v9)(int, int); // r3
  char v10; // r12
  int v11; // r1

  v4 = sub_171258(a2[1]);
  v5 = *(char **)(v4 + 24);
  a2[1] = v4;
  v6 = *v5;
  v7 = v6 > 7;
  if ( v6 != 7 )
    v7 = (unsigned __int8)(v6 - 2) > 2u;
  if ( !v7 )
    sub_946E0("Value not scalar: cannot be an rvalue.", HIDWORD(v4));
  if ( *a2 == 1 )
  {
    LODWORD(v4) = sub_BCCD8(a1, v4);
  }
  else if ( *a2 == 2 )
  {
    sub_C0C84(a1, a2[3]);
    v8 = a2[1];
    v9 = sub_C0A74;
    v10 = *(_BYTE *)(*(_DWORD *)(v8 + 24) + 1);
    v11 = 8 * *(_DWORD *)(v8 + 20);
    if ( (v10 & 1) == 0 )
      v9 = sub_C0A68;
    LODWORD(v4) = v9(a1, v11);
  }
  *a2 = 0;
  return v4;
}
