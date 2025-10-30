int __fastcall sub_6B1D4(int a1)
{
  int result; // r0
  _DWORD *v3; // r5
  int *v4; // r6
  int v5; // r8
  int v6; // t1

  result = sub_162558(*(_DWORD *)(a1 + 36), dword_4748BC);
  if ( !result )
  {
    v3 = (_DWORD *)sub_9836C(12);
    v4 = (int *)dword_487D10;
    v5 = dword_487D14;
    *v3 = 0;
    v3[1] = 0;
    v3[2] = 0;
    while ( (int *)v5 != v4 )
    {
      v6 = *v4++;
      (*(void (__fastcall **)(int, _DWORD *, int))(*(_DWORD *)v6 + 4))(v6, v3, a1);
    }
    sub_16254C(*(_DWORD *)(a1 + 36), dword_4748BC, v3);
    return (int)v3;
  }
  return result;
}
