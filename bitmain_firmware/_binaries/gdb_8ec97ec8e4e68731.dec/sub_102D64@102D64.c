int __fastcall sub_102D64(_DWORD *a1)
{
  _DWORD *v2; // r9
  _DWORD *v3; // r6
  int v4; // t1
  FILE *v5; // r0
  FILE *v6; // r0
  int v7; // r1
  FILE *v8; // r0
  int v9; // r3
  int result; // r0
  int v11; // [sp+4h] [bp-8h] BYREF

  v2 = a1 + 1;
  v3 = a1;
  ((void (__fastcall *)(_DWORD *, int))loc_102C50)(a1 + 1, a1[4] + 4);
  v4 = v3[3];
  v3 += 3;
  v5 = (FILE *)a1[2];
  v11 = 8 * v4;
  sub_102D0C(v5, v3, &v11, 4u);
  v6 = (FILE *)a1[2];
  v11 += 32;
  sub_102D0C(v6, v3, &v11, 4u);
  v7 = a1[4];
  a1[3] = v4;
  ((void (__fastcall *)(_DWORD *, int, _DWORD))loc_102C50)(v2, v4 + v7, 0);
  v8 = (FILE *)a1[2];
  v11 = 0;
  sub_102D0C(v8, v3, &v11, 4u);
  v9 = a1[4];
  a1[3] = v4;
  a1[4] = v4 + 4 + v9;
  result = ((int (__fastcall *)(_DWORD *))loc_102C50)(v2);
  a1[3] = 0;
  return result;
}
