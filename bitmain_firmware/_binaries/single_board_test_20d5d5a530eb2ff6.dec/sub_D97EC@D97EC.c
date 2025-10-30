int __fastcall sub_D97EC(int *a1, int a2, int a3)
{
  int v3; // r5
  int (__fastcall *v7)(int, int, int, int *); // r4
  int v8; // r5
  int *v9; // r0
  int *v10; // r9
  int v11; // r4
  int result; // r0
  int v13; // [sp+Ch] [bp-48h] BYREF
  _BYTE v14[68]; // [sp+10h] [bp-44h] BYREF

  v3 = a1[4];
  v13 = 0;
  v7 = *(int (__fastcall **)(int, int, int, int *))(*(_DWORD *)v3 + 72);
  if ( v7 )
  {
    if ( (a1[2] & 0x200) != 0 )
      return v7(v3, a2, a3, a1);
    v8 = 1;
    goto LABEL_4;
  }
  v8 = a1[2] & 0x200;
  if ( !v8 )
  {
LABEL_4:
    v9 = (int *)sub_D14F4();
    v10 = v9;
    if ( !v9 )
      return -1;
    if ( !sub_D17B4(v9, a1) )
    {
      sub_D1504(v10);
      return -1;
    }
    if ( v8 )
      v11 = (*(int (__fastcall **)(int, int, int, int *))(*(_DWORD *)v10[4] + 72))(v10[4], a2, a3, v10);
    else
      v11 = sub_D16E4(v10, (int)v14, &v13);
    sub_D1504(v10);
    goto LABEL_9;
  }
  v8 = 0;
  v11 = sub_D16E4(a1, (int)v14, &v13);
LABEL_9:
  if ( !v11 )
    v8 |= 1u;
  result = v11;
  if ( !v8 )
    return sub_DA8E0(a1[4], a2, a3, v14, v13);
  return result;
}
