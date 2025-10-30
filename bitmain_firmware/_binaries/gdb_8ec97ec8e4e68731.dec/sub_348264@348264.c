int __fastcall sub_348264(_DWORD *a1, int a2)
{
  unsigned int v3; // r5
  void *exidx; // r0
  int v5; // r1
  int *v6; // r0
  char *v7; // r0
  int v8; // r1
  int v9; // r3
  int v10; // r3
  int *v11; // r0
  char *v12; // r0
  int (*v14)(); // r0
  int v16; // [sp+4h] [bp-8h] BYREF

  v3 = a2 - 2;
  if ( &__gnu_Unwind_Find_exidx )
  {
    exidx = (void *)_gnu_Unwind_Find_exidx(v3, &v16);
    if ( !exidx )
    {
LABEL_12:
      a1[4] = 0;
      return 9;
    }
    v5 = v16;
  }
  else
  {
    exidx = &unk_449564;
    v5 = (&unk_458034 - &unk_449564) >> 3;
    v16 = v5;
  }
  v6 = (int *)sub_3481CC((int)exidx, v5, v3);
  if ( !v6 )
    goto LABEL_12;
  v7 = sub_3481B8(v6);
  v9 = *(_DWORD *)(v8 + 4);
  a1[18] = v7;
  if ( v9 == 1 )
  {
    v10 = 5;
    a1[4] = 0;
    return v10;
  }
  v11 = (int *)(v8 + 4);
  if ( v9 < 0 )
  {
    a1[19] = v11;
    a1[20] = 1;
  }
  else
  {
    v11 = (int *)sub_3481B8(v11);
    a1[19] = v11;
    a1[20] = 0;
  }
  if ( *v11 >= 0 )
  {
    v12 = sub_3481B8(v11);
    v10 = 0;
    a1[4] = v12;
    return v10;
  }
  v14 = sub_348230(HIBYTE(*v11) & 0xF);
  a1[4] = v14;
  if ( v14 )
    return 0;
  else
    return 9;
}
