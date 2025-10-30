void __fastcall sub_279578(int a1, int a2, int a3, int a4, int a5, _DWORD *a6, int a7)
{
  int v11; // r0
  char *v12; // r2
  int v13; // r3
  int v14; // r4
  int v15; // r1
  int v16; // r4
  int v17; // r10
  int v18; // r0
  void *ptr; // [sp+10h] [bp-18h] BYREF
  char v20; // [sp+18h] [bp-10h] BYREF

  v11 = sub_171258(a6);
  v12 = *(char **)(v11 + 24);
  v13 = *v12;
  if ( (unsigned __int8)(v13 - 18) <= 1u )
  {
    v18 = sub_171258(*((_DWORD **)v12 + 5));
    v12 = *(char **)(v18 + 24);
    v14 = v18;
    v13 = *v12;
  }
  else
  {
    v14 = v11;
  }
  switch ( v13 )
  {
    case 2:
      sub_279578(a1, a2, a3, a4, a5, *(_DWORD *)(*((_DWORD *)v12 + 6) + 12), a7);
      sub_279578(a1, a2, a3, a4, a5, *(_DWORD *)(*(_DWORD *)(v14 + 24) + 20), a7);
      break;
    case 3:
    case 4:
      if ( *((__int16 *)v12 + 2) > 0 )
      {
        v17 = 0;
        do
        {
          if ( !sub_174F0C(*((_DWORD *)v12 + 6) + 24 * v17) )
            sub_279578(a1, a2, a3, a4, a5, *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v14 + 24) + 24) + 24 * v17 + 12), a7);
          v12 = *(char **)(v14 + 24);
          ++v17;
        }
        while ( *((__int16 *)v12 + 2) > v17 );
      }
      break;
    case 12:
      v15 = *((_DWORD *)v12 + 6);
      if ( (unsigned int)(*(_DWORD *)(v15 + 16) - 3) <= 1 )
      {
        v16 = v15 + 16;
        sub_278DD4((char **)&ptr, v15 + 16);
        ((void (__fastcall *)(int, void *, int, int, int, int, int))loc_115EE4)(a2, ptr, a3, a4, v16, a5, a7);
        if ( ptr != &v20 )
          sub_339E64(ptr);
      }
      break;
    default:
      return;
  }
}
