int (***__fastcall sub_1CA950(int (***result)(), int a2, const char *a3, char *a4, char *a5, int a6))()
{
  _DWORD *v6; // r6
  int (***v8)(); // r7
  int v9; // r3
  int (__fastcall **v10)(_DWORD *); // r3
  int (**v11)(); // r5
  int (**v12)(); // r8
  int v13; // r4
  int v14; // t1
  _DWORD *v15; // lr
  _DWORD *v16; // r3
  int v17; // r1
  int v18; // r2
  int v19; // r3
  int v20; // r1
  int v21; // r2
  int v22; // r3
  int v23; // r1
  const char *v24; // r0
  int v25; // r0
  const char *v26; // r0
  _DWORD s[11]; // [sp+8h] [bp-2Ch] BYREF

  v6 = *(_DWORD **)(a2 + 36);
  if ( v6 )
  {
    v8 = result;
    while ( 1 )
    {
      v9 = v6[33];
      if ( !v9 )
        goto LABEL_18;
      v10 = *(int (__fastcall ***)(_DWORD *))(v9 + 36);
      if ( !v10 )
        goto LABEL_18;
      if ( a3 )
      {
        v24 = (const char *)sub_1B87A8((int)v6);
        if ( j_strcmp(v24, a3) )
        {
          v25 = sub_1B87A8((int)v6);
          v26 = (const char *)sub_3245A4(v25);
          result = (int (***)())j_strcmp(v26, a3);
          if ( result )
            goto LABEL_18;
        }
        v10 = *(int (__fastcall ***)(_DWORD *))(v6[33] + 36);
      }
      result = (int (***)())(*v10)(v6);
      v11 = *result;
      v12 = result[1];
      if ( *result != v12 )
        break;
LABEL_18:
      v6 = (_DWORD *)*v6;
      if ( !v6 )
        return result;
    }
    while ( 1 )
    {
      v14 = (int)*v11++;
      v13 = v14;
      if ( v8 != &off_3CD45C )
      {
        result = (int (***)())(*(int (__fastcall **)(int))(*(_DWORD *)v13 + 36))(v13);
        if ( v8 != result )
          goto LABEL_9;
      }
      if ( a4 )
      {
        result = (int (***)())sub_33CAA0(v13 + 28, a4);
        if ( result )
          goto LABEL_9;
      }
      result = (int (***)())sub_33CAA0(v13 + 4, a5);
      if ( result )
        goto LABEL_9;
      memset(s, 0, 0x28u);
      s[5] = (*(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)v13 + 8))(v13, v6);
      LOBYTE(s[7]) = 1;
      result = (int (***)())sub_214838(s[5]);
      v15 = *(_DWORD **)(a6 + 4);
      v16 = *(_DWORD **)(a6 + 8);
      s[3] = result;
      s[8] = v13;
      s[0] = a2;
      s[9] = v6;
      if ( v15 == v16 )
      {
        result = (int (***)())sub_1CC304(a6, v15, s);
LABEL_9:
        if ( v12 == v11 )
          goto LABEL_18;
      }
      else
      {
        if ( v15 )
        {
          v17 = s[1];
          v18 = s[2];
          v19 = s[3];
          *v15 = s[0];
          v15[1] = v17;
          v15[2] = v18;
          v15[3] = v19;
          v20 = s[5];
          v21 = s[6];
          v22 = s[7];
          v15[4] = s[4];
          v15[5] = v20;
          v15[6] = v21;
          v15[7] = v22;
          result = (int (***)())s[8];
          v23 = s[9];
          v15[8] = s[8];
          v15[9] = v23;
        }
        *(_DWORD *)(a6 + 4) = v15 + 10;
        if ( v12 == v11 )
          goto LABEL_18;
      }
    }
  }
  return result;
}
