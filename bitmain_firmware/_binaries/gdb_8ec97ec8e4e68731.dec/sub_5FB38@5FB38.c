void __fastcall sub_5FB38(int a1, char **a2, int a3)
{
  int v5; // r4
  char *v6; // r5
  int v7; // r6
  int v8; // r3
  bool v9; // zf
  int v10; // r0
  int v11; // [sp+0h] [bp-18h]
  char v12; // [sp+4h] [bp-14h]
  int v13; // [sp+8h] [bp-10h]
  char v14; // [sp+Ch] [bp-Ch]
  _DWORD v15[2]; // [sp+10h] [bp-8h] BYREF

  v5 = *(_DWORD *)sub_242FDC(a1);
  if ( (unsigned int)(a3 - 1) > 1 )
    sub_946E0("-var-update: Usage: [PRINT_VALUES] NAME.");
  if ( a3 == 1 )
  {
    v6 = *a2;
    v7 = 0;
  }
  else
  {
    v6 = a2[1];
    v7 = sub_69BC0(*a2);
  }
  v12 = 0;
  v11 = 0;
  v13 = 0;
  v14 = 0;
  if ( sub_69098(v5) <= 1 )
  {
    v11 = v5;
    sub_2578AC(v5, 0);
    v12 = 1;
  }
  else
  {
    v13 = v5;
    sub_2578AC(v5, 1);
    v14 = 1;
  }
  v8 = (unsigned __int8)*v6;
  v9 = v8 == 64;
  if ( v8 != 64 )
    v9 = v8 == 42;
  if ( v9 && !v6[1] )
  {
    v15[0] = v8 == 64;
    v15[1] = v7;
    sub_271970(sub_5F754, v15);
  }
  else
  {
    v10 = sub_26FBAC(v6);
    sub_5F2F4(v10, v7, 1);
  }
  if ( v14 )
    sub_25734C(v13, 1);
  if ( v12 )
    sub_25734C(v11, 0);
}
