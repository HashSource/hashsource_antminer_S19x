void __fastcall sub_26CC14(_DWORD *a1)
{
  int v1; // r3
  void *v3; // r0
  void (__fastcall *v4)(_DWORD); // r3

  v1 = a1[2];
  switch ( v1 )
  {
    case 2:
      v4 = *(void (__fastcall **)(_DWORD))(a1[4] + 8);
      if ( v4 )
        v4(a1[5]);
      break;
    case 5:
      v3 = (void *)a1[4];
      if ( v3 )
        free(v3);
      break;
    case 1:
      ((void (__fastcall *)(_DWORD))loc_26C200)(a1[4]);
      break;
  }
  a1[2] = 0;
}
