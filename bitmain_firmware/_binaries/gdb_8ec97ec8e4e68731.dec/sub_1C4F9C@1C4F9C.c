int __fastcall sub_1C4F9C(int *a1, int a2, signed int a3)
{
  int v4; // r3
  int v5; // r4
  int v6; // r12
  int v7; // lr
  int v8; // t1
  int v9; // r6
  int v10; // r1
  const void *v11; // r7
  int v12; // r4
  _BYTE *v14; // r0
  int v15; // r4
  _BYTE *v16; // r0
  int v17; // r4
  char *v18; // r0
  _BYTE *v19; // r0
  int v20; // r0
  _DWORD v23[2]; // [sp+10h] [bp-14h] BYREF
  int v24[3]; // [sp+18h] [bp-Ch] BYREF

  if ( a3 <= 1 )
  {
    if ( a3 == 1 )
    {
      v9 = 0;
      goto LABEL_11;
    }
  }
  else
  {
    v4 = *(unsigned __int8 *)(a2 + 1);
    if ( v4 == 36 )
    {
      if ( a3 == 2 )
      {
        v9 = 1;
        goto LABEL_11;
      }
      v4 = *(unsigned __int8 *)(a2 + 2);
      v5 = 1;
      v6 = 2;
    }
    else
    {
      v5 = 0;
      v6 = 1;
    }
    if ( (unsigned int)(v4 - 48) <= 9 )
    {
      v7 = a2 + v6;
      while ( ++v6 < a3 )
      {
        v8 = *(unsigned __int8 *)++v7;
        if ( (unsigned int)(v8 - 48) > 9 )
          goto LABEL_18;
      }
      if ( v6 == a3 )
      {
        v9 = strtol((const char *)(a2 + v5 + 1), 0, 10);
        if ( !v5 )
        {
LABEL_12:
          sub_1C37BC(a1, 43);
          sub_1C3898(a1, v10, v9, v9 >> 31);
          return sub_1C37BC(a1, 43);
        }
LABEL_11:
        v9 = -v9;
        goto LABEL_12;
      }
    }
  }
LABEL_18:
  v11 = (const void *)(a2 + 1);
  v12 = a3 - 1;
  if ( sub_257E94(*(_DWORD *)(a1[1] + 4), (char *)(a2 + 1)) < 0 )
  {
    v14 = sub_1C3E58((const void *)a2, a3);
    v15 = sub_26CA48(v14 + 1);
    if ( v15 )
    {
      sub_1C37BC(a1, 45);
      sub_1C3920(a1, v15);
      return sub_1C37BC(a1, 45);
    }
    else
    {
      v16 = sub_1C3E58((const void *)a2, a3);
      sub_21D6B0(v23, v16, 0, 1, 0);
      v17 = v23[0];
      if ( v23[0] )
      {
        sub_1C37BC(a1, 40);
        sub_1C3840(a1, v23[1]);
        sub_1C37E8(a1, v17);
        return sub_1C37BC(a1, 40);
      }
      else
      {
        v18 = sub_1C3E58((const void *)a2, a3);
        sub_1B1BE8(v24, v18);
        if ( v24[0] )
        {
          return sub_1C3B74(a1, v24[0], v24[1]);
        }
        else
        {
          sub_1C37BC(a1, 45);
          v19 = sub_1C3E58((const void *)a2, a3);
          v20 = sub_26CB48(v19 + 1);
          sub_1C3920(a1, v20);
          return sub_1C37BC(a1, 45);
        }
      }
    }
  }
  else
  {
    sub_1C37BC(a1, 44);
    sub_1C4F0C((unsigned int *)a1, v11, v12);
    return sub_1C37BC(a1, 44);
  }
}
