void __fastcall sub_2529D0(const void *a1, int a2, void *a3, int a4)
{
  int v8; // r3
  int v9; // r0
  int v10; // r8
  int v11; // r3
  size_t v12; // r2
  int v13; // r0
  int v14; // r8
  int v15; // r0
  void *v16; // r0
  void *ptr[2]; // [sp+8h] [bp-18h] BYREF
  _BYTE v18[16]; // [sp+10h] [bp-10h] BYREF

  v8 = **(char **)(a4 + 24);
  if ( v8 == **(char **)(a2 + 24) )
  {
    if ( v8 == 9 )
    {
      v10 = ((int (__fastcall *)(int))loc_173460)(a2);
      if ( v10 == ((int (__fastcall *)(int))loc_173460)(a4) )
        goto LABEL_10;
    }
    else
    {
      if ( v8 != 25 )
      {
        sub_94700(
          (int)"./target-float.c",
          2156,
          "%s: %s",
          "bool target_float_same_format_p(const type*, const type*)",
          "unexpected type code");
        goto LABEL_19;
      }
      if ( *(_DWORD *)(a2 + 20) == *(_DWORD *)(a4 + 20) )
      {
        v13 = sub_170040(a2);
        v14 = ((int (__fastcall *)(int))loc_165BB8)(v13);
        v15 = sub_170040(a4);
        if ( v14 == ((int (__fastcall *)(int))loc_165BB8)(v15) )
        {
LABEL_10:
          memset(a3, 0, *(_DWORD *)(a4 + 20));
          v11 = **(char **)(a4 + 24);
          if ( v11 == 9 )
          {
            v12 = (unsigned int)(*(_DWORD *)(((int (__fastcall *)(int))loc_173460)(a4) + 4) + 7) >> 3;
            goto LABEL_14;
          }
          if ( v11 == 25 )
          {
            v12 = *(_DWORD *)(a4 + 20);
LABEL_14:
            memcpy(a3, a1, v12);
            return;
          }
LABEL_19:
          sub_94700(
            (int)"./target-float.c",
            2174,
            "%s: %s",
            "int target_float_format_length(const type*)",
            "unexpected type code");
          v16 = ptr[0];
          if ( ptr[0] != v18 )
            sub_339E64(ptr[0]);
          sub_338FFC(v16);
        }
      }
    }
    v9 = ((int (__fastcall *)(int, int))loc_251F80)(a2, a4);
    (*(void (__fastcall **)(int, const void *, int, void *, int))(*(_DWORD *)v9 + 28))(v9, a1, a2, a3, a4);
    return;
  }
  ((void (__fastcall *)(void **, const void *, int, _DWORD))loc_252530)(ptr, a1, a2, 0);
  sub_25286C((int)a3, a4, (int)ptr);
  if ( ptr[0] != v18 )
    sub_339E64(ptr[0]);
}
