int __fastcall sub_125E00(_DWORD *a1, int a2, int (__fastcall **a3)(int, int))
{
  int v3; // r8
  _DWORD *v4; // r4
  int v5; // r7
  int v8; // r1
  _DWORD *v9; // r6
  int v10; // r10
  int v11; // r0
  int v12; // t1
  int result; // r0

  v3 = *a1;
  v4 = a1;
  v5 = a1[1];
  while ( 1 )
  {
    v9 = v4;
    v10 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a2 + 4))(a2, v5);
    v11 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a2 + 4))(a2, *(v4 - 1));
    v12 = *(v4 - 2);
    v4 -= 2;
    result = (*a3)(v10 + v3, v11 + v12);
    if ( result >= 0 )
      break;
    v8 = v4[1];
    v4[2] = *v4;
    v4[3] = v8;
  }
  *v9 = v3;
  v9[1] = v5;
  return result;
}
