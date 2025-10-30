int __fastcall sub_27F5C(int a1, int a2)
{
  int v4; // r5
  int v5; // r6
  int v6; // r0
  int *v7; // r4
  int *v8; // r6
  int v9; // t1
  int (**v11[6])(void); // [sp+Ch] [bp-18h] BYREF

  v4 = sub_1DD58C(a2);
  v5 = ((int (*)(void))loc_165BB8)();
  v6 = ((int (__fastcall *)(int))loc_165C28)(v4);
  sub_187D0(v11, (int)&off_4696BC, v5, v6, 0, a2);
  sub_187E8((void **)a1, v11);
  v7 = *(int **)a1;
  v8 = *(int **)(a1 + 4);
  if ( *(int **)a1 != v8 )
  {
    do
    {
      v9 = *v7++;
      *(v7 - 1) = ((int (__fastcall *)(int, int))loc_169FA0)(v4, v9);
    }
    while ( v8 != v7 );
  }
  return a1;
}
