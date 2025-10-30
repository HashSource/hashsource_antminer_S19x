unsigned int __fastcall sub_33D390(double a1)
{
  int v1; // r7
  int v2; // r5
  double v3; // r0
  unsigned int *v4; // r4
  int v5; // r2
  unsigned int *v6; // r6
  unsigned int v7; // r5
  double v8; // d7
  int v10; // r3
  int v11; // r5
  double v12; // d0

  v1 = LODWORD(a1);
  if ( HIDWORD(a1) <= 0xC )
  {
    v11 = byte_43B6A0[HIDWORD(a1)];
    v12 = (double)v11 * *(float *)LODWORD(a1);
    ceil(a1);
    *(_DWORD *)(v1 + 4) = (unsigned int)v12;
    return v11;
  }
  else
  {
    HIDWORD(v3) = HIDWORD(a1) + 1;
    v2 = 249;
    LODWORD(v3) = &std::__detail::__prime_list;
    v4 = (unsigned int *)&unk_43B2B4;
    while ( 1 )
    {
      v5 = v2 >> 1;
      v6 = &v4[v2 >> 1];
      if ( HIDWORD(v3) <= *v6 )
        break;
      v10 = v2 >> 1;
      v5 = v2;
LABEL_12:
      v4 = v6 + 1;
      v2 = v5 - v10 - 1;
      if ( v2 <= 0 )
        goto LABEL_8;
    }
    while ( 1 )
    {
      v10 = v5 >> 1;
      if ( !v5 )
        break;
      v6 = &v4[v10];
      if ( HIDWORD(v3) > *v6 )
        goto LABEL_12;
      v5 >>= 1;
    }
LABEL_8:
    v7 = *v4;
    if ( v4 == (unsigned int *)&unk_43B698 )
    {
      *(_DWORD *)(v1 + 4) = -1;
    }
    else
    {
      v8 = *(float *)v1;
      ceil(v3);
      *(_DWORD *)(v1 + 4) = (unsigned int)((double)v7 * v8);
    }
    return v7;
  }
}
