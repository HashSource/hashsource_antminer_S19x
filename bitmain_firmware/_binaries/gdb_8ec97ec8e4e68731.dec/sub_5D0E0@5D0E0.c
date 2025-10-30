void __fastcall sub_5D0E0(int a1, int *a2, int a3)
{
  int *v5; // r0
  int v6; // r5
  int v7; // r9
  int v8; // r1
  _DWORD *v9; // r4
  _DWORD *v10; // r8
  void *v11; // [sp+Ch] [bp-40h] BYREF
  _BYTE *v12; // [sp+10h] [bp-3Ch]
  void *v13; // [sp+18h] [bp-34h] BYREF
  int v14; // [sp+1Ch] [bp-30h]
  char v15[16]; // [sp+20h] [bp-2Ch] BYREF
  void *ptr; // [sp+30h] [bp-1Ch] BYREF
  int v17; // [sp+34h] [bp-18h]
  char v18[20]; // [sp+38h] [bp-14h] BYREF

  v5 = (int *)sub_242FDC(a1);
  v6 = *v5;
  v7 = sub_B894C(v5);
  if ( a3 )
  {
    if ( a3 != 1 )
      sub_946E0("Usage: -info-ada-exceptions [REGEXP]");
    v8 = *a2;
  }
  else
  {
    v8 = 0;
  }
  sub_AF454(&v11, v8);
  ptr = v18;
  strcpy(v18, "ada-exceptions");
  v17 = 14;
  sub_25704C(v6, 2, (v12 - (_BYTE *)v11) >> 3, &ptr);
  if ( ptr != v18 )
    sub_339E64(ptr);
  strcpy(v15, "name");
  strcpy(v18, "Name");
  ptr = v18;
  v13 = v15;
  v14 = 4;
  v17 = 4;
  sub_2571B8(v6, 1, -1, &v13, &ptr);
  if ( ptr != v18 )
    sub_339E64(ptr);
  if ( v13 != v15 )
    sub_339E64(v13);
  v13 = v15;
  strcpy(v15, "address");
  ptr = v18;
  strcpy(v18, "Address");
  v14 = 7;
  v17 = 7;
  sub_2571B8(v6, 1, -1, &v13, &ptr);
  if ( ptr != v18 )
    sub_339E64(ptr);
  if ( v13 != v15 )
    sub_339E64(v13);
  sub_25722C(v6);
  v9 = v11;
  v10 = v12;
  if ( v12 != v11 )
  {
    do
    {
      sub_2578AC(v6, 0);
      sub_2575E8(v6, "name", *v9);
      sub_257630(v6, "address", v7, v9[1]);
      v9 += 2;
      sub_25734C(v6, 0);
    }
    while ( v10 != v9 );
  }
  sub_257270(v6);
  if ( v11 )
    sub_339E64(v11);
}
