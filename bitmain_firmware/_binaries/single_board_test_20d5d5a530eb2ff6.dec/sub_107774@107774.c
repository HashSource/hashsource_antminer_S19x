int __fastcall sub_107774(int a1, _DWORD *a2, int a3)
{
  int v4; // r4
  int *v6; // r7
  int *v7; // r8
  int v8; // r5
  int *v9; // r0
  bool v10; // zf
  int *v11; // r6
  int v12; // r11
  int *v13; // r9
  int *v14; // r0
  int *v15; // r9
  int *v16; // r0
  int v17; // r0
  int v19; // r2
  int *v21; // [sp+10h] [bp-14h]
  int *v22; // [sp+14h] [bp-10h]
  int *v23; // [sp+18h] [bp-Ch] BYREF
  int *v24; // [sp+1Ch] [bp-8h] BYREF

  v4 = 0;
  v6 = (int *)sub_C59B8(a1);
  v23 = 0;
  v7 = (int *)sub_C6244((int)v6);
  v24 = 0;
  v8 = sub_130B08(v7);
  v9 = sub_C63F4(v6);
  v10 = v9 == 0;
  if ( v9 )
    v10 = v8 == 0;
  v11 = v9;
  v12 = v10;
  if ( v10 )
  {
    v19 = 302;
LABEL_20:
    sub_D0048(53, 107, 65, (int)"crypto/sm2/sm2_sign.c", v19);
    goto LABEL_18;
  }
  sub_130BC0(v8);
  v21 = (int *)sub_130CCC(v8);
  v4 = sub_130CCC(v8);
  if ( !v4 )
  {
    v19 = 310;
    goto LABEL_20;
  }
  sub_C4A14(a2, &v23, &v24);
  v13 = v23;
  v14 = (int *)sub_B81FC();
  if ( sub_B8354(v13, v14) < 0
    || (v15 = v24, v16 = (int *)sub_B81FC(), sub_B8354(v15, v16) < 0)
    || sub_B8354(v7, v23) <= 0
    || sub_B8354(v7, v24) <= 0 )
  {
    v4 = 0;
    sub_D0048(53, 107, 101, (int)"crypto/sm2/sm2_sign.c", 330);
  }
  else if ( sub_13384C(v21, v23, v24, v7, v8) )
  {
    if ( sub_B85B0((int)v21) )
    {
      v4 = v12;
      sub_D0048(53, 107, 101, (int)"crypto/sm2/sm2_sign.c", 340);
    }
    else
    {
      v22 = v24;
      v17 = sub_C5A68(a1);
      if ( sub_C7330(v6, v11, (int)v22, v17, (int)v21, v8) && sub_C6D34(v6, v11, v4, 0, v8) )
      {
        v4 = sub_13384C(v21, a3, v4, v7, v8);
        if ( v4 )
          v4 = sub_B8354(v23, v21) == 0;
        else
          sub_D0048(53, 107, 3, (int)"crypto/sm2/sm2_sign.c", 351);
      }
      else
      {
        v4 = 0;
        sub_D0048(53, 107, 16, (int)"crypto/sm2/sm2_sign.c", 346);
      }
    }
  }
  else
  {
    v4 = 0;
    sub_D0048(53, 107, 3, (int)"crypto/sm2/sm2_sign.c", 335);
  }
LABEL_18:
  sub_C6490((int)v11);
  sub_130B5C(v8);
  return v4;
}
