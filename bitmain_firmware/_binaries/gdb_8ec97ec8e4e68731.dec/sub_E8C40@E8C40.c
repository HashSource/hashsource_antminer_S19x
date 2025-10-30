void __fastcall sub_E8C40(char *a1, char *a2, int a3)
{
  char v3; // r3
  void *v4; // r5
  _BYTE *v6; // r3
  int v7; // r2
  void *ptr; // [sp+0h] [bp-34h] BYREF
  int v9; // [sp+4h] [bp-30h]
  _DWORD v10[4]; // [sp+8h] [bp-2Ch] BYREF
  void *v11; // [sp+18h] [bp-1Ch] BYREF
  int v12; // [sp+1Ch] [bp-18h]
  _DWORD v13[5]; // [sp+20h] [bp-14h] BYREF

  v3 = *a2;
  v4 = a1;
  ptr = v10;
  v9 = 0;
  LOBYTE(v10[0]) = 0;
  if ( (v3 & 1) != 0 )
    goto LABEL_2;
  sub_FF1F4((int)&v11, a1);
  v6 = ptr;
  if ( v11 == v13 )
  {
    sub_33B48C(&ptr, &v11);
    v6 = v11;
    goto LABEL_9;
  }
  if ( ptr == v10 )
  {
    ptr = v11;
    v9 = v12;
    v10[0] = v13[0];
    goto LABEL_15;
  }
  ptr = v11;
  v9 = v12;
  v7 = v10[0];
  v10[0] = v13[0];
  if ( !v6 )
  {
LABEL_15:
    v11 = v13;
    v6 = v13;
    goto LABEL_9;
  }
  v11 = v6;
  v13[0] = v7;
LABEL_9:
  v12 = 0;
  *v6 = 0;
  if ( v11 != v13 )
    sub_339E64(v11);
  if ( v9 )
    v4 = ptr;
LABEL_2:
  sub_25A6BC(v4, a3);
  if ( ptr != v10 )
    sub_339E64(ptr);
}
