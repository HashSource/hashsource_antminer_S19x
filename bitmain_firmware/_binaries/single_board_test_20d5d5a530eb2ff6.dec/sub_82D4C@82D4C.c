int __fastcall sub_82D4C(int a1, int a2, _BYTE *a3, unsigned int a4, int a5)
{
  _BYTE *v5; // r5
  unsigned int v6; // r4
  time_t v7; // r0
  int result; // r0
  int **v9; // kr00_4
  _BYTE *v10; // r3
  int v11; // r2

  if ( a4 <= 3 )
    return 0;
  if ( a2 )
  {
    v5 = a3;
    v6 = a4;
    if ( ((*(_DWORD *)(a1 + 1264) >> 6) & 1) != 0 )
      goto LABEL_4;
  }
  else
  {
    v5 = a3;
    v6 = a4;
    if ( ((*(_DWORD *)(a1 + 1264) >> 5) & 1) != 0 )
    {
LABEL_4:
      v7 = time(0);
      v5[3] = v7;
      *v5 = HIBYTE(v7);
      v5[1] = BYTE2(v7);
      v5[2] = BYTE1(v7);
      result = sub_F497C(v5 + 4, v6 - 4);
      goto LABEL_5;
    }
  }
  result = sub_F497C(a3, a4);
LABEL_5:
  if ( result <= 0 )
    return result;
  if ( v6 <= 8 )
    return 0;
  v9 = &tls12downgrade_ptr;
  if ( a5 == 1 )
  {
LABEL_14:
    v10 = &v5[v6];
    v11 = (*v9)[1];
    *((_DWORD *)v10 - 2) = **v9;
    *((_DWORD *)v10 - 1) = v11;
    return result;
  }
  if ( a5 == 2 )
  {
    v9 = (int **)&tls11downgrade_ptr;
    goto LABEL_14;
  }
  return result;
}
