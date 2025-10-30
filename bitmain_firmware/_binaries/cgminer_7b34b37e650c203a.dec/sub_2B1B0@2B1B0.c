int __fastcall sub_2B1B0(int a1)
{
  double v1; // d0
  int v3; // r4
  double v4; // d8
  unsigned __int64 v5; // r0
  int result; // r0
  double v7; // d7
  double v8; // d7
  double v9; // d8
  double v10; // d8
  double v11; // d8
  double v12; // d7

  v3 = *(_DWORD *)(a1 + 260);
  if ( v1 == 0.0 )
  {
    v9 = COERCE_DOUBLE(((__int64 (__fastcall *)(_DWORD, _DWORD))sub_4A10C)(*(_DWORD *)(a1 + 184), *(_DWORD *)(a1 + 188)))
       * 6.27710174e57;
    v10 = v9
        + COERCE_DOUBLE(((__int64 (__fastcall *)(_DWORD, _DWORD))sub_4A10C)(*(_DWORD *)(a1 + 176), *(_DWORD *)(a1 + 180)))
        * 3.40282367e38;
    v11 = v10
        + COERCE_DOUBLE(((__int64 (__fastcall *)(_DWORD, _DWORD))sub_4A10C)(*(_DWORD *)(a1 + 168), *(_DWORD *)(a1 + 172)))
        * 1.84467441e19;
    v12 = sub_4A10C(*(_DWORD *)(a1 + 160), *(_DWORD *)(a1 + 164)) + v11;
    if ( v12 == 0.0 )
    {
      v4 = 2.69595353e67;
      v5 = -1;
    }
    else
    {
      v4 = 2.69595353e67 / v12;
      round();
      LODWORD(v5) = sub_4A1D8(
                      COERCE_UNSIGNED_INT64(2.69595353e67 / v12),
                      HIDWORD(COERCE_UNSIGNED_INT64(2.69595353e67 / v12)));
    }
    *(double *)(a1 + 376) = v4;
  }
  else
  {
    *(double *)(a1 + 376) = v1;
    v4 = v1;
    round();
    v5 = sub_4A1D8(LODWORD(v1), HIDWORD(v1));
  }
  *(double *)(v3 + 480) = v4;
  result = sub_2AEF8(v5, (char *)(*(_DWORD *)(a1 + 260) + 48), 8u, 0);
  v7 = *(double *)(v3 + 464);
  if ( v7 == v4 )
  {
    ++*(_DWORD *)(v3 + 488);
    goto LABEL_5;
  }
  if ( v7 <= v4 )
  {
    if ( v7 != 0.0 )
    {
LABEL_5:
      v8 = *(double *)(v3 + 472);
      if ( v8 != v4 )
        goto LABEL_6;
LABEL_15:
      ++*(_DWORD *)(v3 + 492);
      return result;
    }
    *(double *)(v3 + 464) = v4;
    *(_DWORD *)(v3 + 488) = 1;
  }
  else
  {
    *(double *)(v3 + 464) = v4;
    *(_DWORD *)(v3 + 488) = 1;
  }
  v8 = *(double *)(v3 + 472);
  if ( v8 == v4 )
    goto LABEL_15;
LABEL_6:
  if ( v8 < v4 )
  {
    *(double *)(v3 + 472) = v4;
    *(_DWORD *)(v3 + 492) = 1;
  }
  return result;
}
