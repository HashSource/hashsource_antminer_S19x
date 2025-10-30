int __fastcall sub_3232A0(int a1, double *a2, void *s)
{
  double v5; // d8
  double v6; // r0
  int *v7; // r2
  int v8; // r5
  int v9; // r7
  __int64 v10; // r8
  double v11; // d0
  int v12; // r10
  int v13; // r3
  int v14; // r3
  int v15; // r7
  int v16; // r5
  unsigned int v17; // r0
  unsigned int v18; // r12
  int v19; // r3
  double v20; // d0
  double v21; // r0
  int v22; // r2
  int v24; // [sp+Ch] [bp-4h] BYREF

  v5 = *a2;
  LODWORD(v6) = memset(s, 0, *(_DWORD *)(a1 + 4) >> 3);
  if ( v5 < 0.0 )
  {
    v5 = -v5;
    LODWORD(v6) = sub_323070((int)s, *(_DWORD *)a1, *(_DWORD *)(a1 + 4), *(_DWORD *)(a1 + 8), 1u, 1u);
  }
  if ( v5 != 0.0 )
  {
    v8 = *(_DWORD *)a1;
    v9 = *(_DWORD *)(a1 + 4);
    v10 = *(_QWORD *)(a1 + 12);
    if ( v5 + v5 == v5 )
    {
      LODWORD(v6) = sub_323070((int)s, v8, v9, v10, HIDWORD(v10), *(_DWORD *)(a1 + 24));
    }
    else
    {
      v11 = v5;
      LODWORD(v6) = &v24;
      frexp(v6, v7);
      v12 = v24;
      v13 = v24 + *(_DWORD *)(a1 + 20);
      if ( v13 <= 1 )
      {
        sub_323070((int)s, v8, v9, v10, HIDWORD(v10), 0);
        LODWORD(v21) = v12 + *(_DWORD *)(a1 + 20) - 1;
        v6 = ldexp(v21, v22);
      }
      else
      {
        LODWORD(v6) = sub_323070((int)s, v8, v9, v10, HIDWORD(v10), v13 - 1);
      }
      v14 = *(_DWORD *)(a1 + 32);
      v15 = *(_DWORD *)(a1 + 28);
      v16 = v14;
      if ( v14 > 0 )
      {
        while ( 1 )
        {
          v20 = v11 * 4294967300.0;
          v18 = v16 >= 32 ? 32 : v16;
          v17 = (unsigned int)v20;
          v11 = v20 - (double)(unsigned int)v20;
          if ( v16 == v14 && *(_DWORD *)(a1 + 36) == 1 && *(_DWORD *)(a1 + 20) + v24 > 1 )
          {
            v17 &= ~0x80000000;
            --v18;
          }
          else if ( v16 > 31 )
          {
            v18 = 32;
          }
          else
          {
            v17 >>= 32 - v18;
          }
          v16 -= v18;
          v19 = v15;
          v15 += v18;
          LODWORD(v6) = sub_323070((int)s, *(_DWORD *)a1, *(_DWORD *)(a1 + 4), v19, v18, v17);
          if ( v16 <= 0 )
            break;
          v14 = *(_DWORD *)(a1 + 32);
        }
      }
    }
  }
  return LODWORD(v6);
}
