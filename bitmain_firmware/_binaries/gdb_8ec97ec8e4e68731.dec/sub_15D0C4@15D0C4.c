int __fastcall sub_15D0C4(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, unsigned __int8 a9, int a10)
{
  int v10; // r5
  _DWORD *v11; // r0
  int v12; // r0
  int *v13; // r0
  int v14; // r0
  _DWORD *v15; // r0
  int v16; // r0
  int *v17; // r0
  int v18; // r0
  _DWORD *v19; // r0
  int varg_r0; // [sp+18h] [bp+Ch]

  varg_r0 = a1;
  if ( (a4 & 0x17) == 0x10 && (a9 & 0x17) == 0x10 )
  {
    v10 = 1;
    goto LABEL_3;
  }
  v10 = a4 & 7;
  if ( (a4 & 7) != 0 )
  {
    v10 = a9 & 7;
    if ( v10 )
    {
      v10 = ((unsigned __int8)a4 ^ a9) & 7;
      if ( (((unsigned __int8)a4 ^ a9) & 7) != 0 )
      {
LABEL_8:
        v10 = 0;
        goto LABEL_3;
      }
      if ( a1 == a6 )
      {
        if ( (a4 & 8) == 0 || (a9 & 8) == 0 || (a1 = a2, a2 == a7) )
        {
          if ( (a4 & 0x10) != 0 && (a9 & 0x10) != 0 && a3 != a8 )
            goto LABEL_8;
          v10 = a5 == a10;
        }
      }
    }
  }
LABEL_3:
  if ( dword_487724 )
  {
    v11 = (_DWORD *)sub_242FC8(a1);
    v12 = sub_2594B0(*v11, "{ frame_id_eq (l=");
    v13 = (int *)sub_242FC8(v12);
    v14 = sub_15C6C8(*v13, varg_r0, a2, a3, a4, a5);
    v15 = (_DWORD *)sub_242FC8(v14);
    v16 = sub_2594B0(*v15, ",r=");
    v17 = (int *)sub_242FC8(v16);
    v18 = sub_15C6C8(*v17, a6, a7, a8, a9, a10);
    v19 = (_DWORD *)sub_242FC8(v18);
    sub_2594B0(*v19, ") -> %d }\n", v10);
  }
  return v10;
}
