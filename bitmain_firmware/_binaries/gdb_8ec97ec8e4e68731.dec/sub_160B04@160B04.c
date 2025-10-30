void __fastcall sub_160B04(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10)
{
  int v10; // r5
  _DWORD *v11; // r6
  int v12; // r7
  int *v15; // r0
  int v16; // r3
  int v17; // r0

  sub_92E40(v12);
  if ( a2 == 1 )
  {
    v15 = (int *)sub_339E78(a1);
    v16 = v15[1];
    *v11 = 0;
    if ( v16 == 9 )
    {
      v17 = ((int (__fastcall *)(int))loc_1605F8)(v10);
      sub_339EF8(v17);
      __asm { POP             {R4-R8,PC} }
    }
    sub_92F1C(*v15, v15[1], v15[2]);
  }
  sub_339E78(a1);
  sub_92E60();
}
