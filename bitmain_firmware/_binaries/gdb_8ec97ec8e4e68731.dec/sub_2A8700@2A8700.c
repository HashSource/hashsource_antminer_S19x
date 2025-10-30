__int64 __fastcall sub_2A8700(int a1, void *a2, size_t a3)
{
  size_t *v4; // r6
  size_t v6; // r4
  size_t v7; // r12
  unsigned __int64 v8; // r8
  bool v9; // cf
  int v11; // r3

  v4 = *(size_t **)(a1 + 8);
  v6 = *(_DWORD *)(a1 + 24);
  v7 = *v4;
  v8 = a3 + *(_QWORD *)(a1 + 24);
  if ( v8 > *v4 )
  {
    v9 = v7 >= v6;
    if ( v7 >= v6 )
      v6 = v7 - v6;
    else
      LODWORD(v8) = 0;
    if ( v9 )
      LODWORD(v8) = v6;
    else
      v6 = v8;
    ((void (__fastcall *)(int))loc_2A6C48)(18);
    v11 = *(_DWORD *)(a1 + 24);
  }
  else
  {
    v11 = *(_DWORD *)(a1 + 24);
    LODWORD(v8) = a3;
    v6 = a3;
  }
  memcpy(a2, (const void *)(v4[1] + v11), v6);
  return (unsigned int)v8;
}
