int __fastcall sub_4A084(int a1, int a2, char *s)
{
  const char *v4; // r4
  size_t v5; // r7
  int v6; // r0
  char *v7; // r5
  unsigned int v8; // r4
  const unsigned __int16 **v9; // r8
  _BYTE *v10; // r1
  _BOOL4 v11; // r2
  unsigned int v12; // r3
  unsigned int v13; // t1
  size_t v14; // r12
  _BYTE *v15; // r0
  unsigned int v16; // r1
  _BYTE *v17; // r0
  _BYTE *v18; // r4
  int v20; // [sp+0h] [bp-FCh]
  void *v21; // [sp+4h] [bp-F8h]
  _DWORD dest[33]; // [sp+Ch] [bp-F0h] BYREF
  int v23; // [sp+90h] [bp-6Ch] BYREF
  _BYTE v24[95]; // [sp+94h] [bp-68h] BYREF
  _BYTE v25[9]; // [sp+F3h] [bp-9h] BYREF

  v20 = a1;
  v21 = &_stack_chk_guard;
  switch ( a2 )
  {
    case 2:
      v4 = "--> ";
      break;
    case 3:
      v4 = "<-- ";
      break;
    case 4:
      v4 = "--- ";
      break;
    case 5:
      v4 = "=== ";
      break;
    case 6:
      v4 = "-W- ";
      break;
    case 7:
      v4 = "-X- ";
      break;
    case 8:
      v4 = "!!! ";
      break;
    default:
      v4 = "JJY ";
      break;
  }
  v5 = strlen(s);
  v6 = *(_DWORD *)v4;
  v24[0] = *((_DWORD *)v4 + 1);
  v23 = v6;
  memcpy(dest, off_B6ED0, sizeof(dest));
  if ( v5 )
  {
    v7 = s;
    v8 = 0;
    v9 = _ctype_b_loc();
    do
    {
      v13 = (unsigned __int8)*v7++;
      v12 = v13;
      if ( ((*v9)[v13] & 0x4000) != 0 )
      {
        if ( v8 == 95 )
        {
          v18 = v25;
          goto LABEL_25;
        }
        v10 = &v25[v8++ + 5];
        *(v10 - 100) = v12;
      }
      else if ( v12 > 0x20 )
      {
        if ( v8 + 6 > 0x5F )
        {
LABEL_27:
          v18 = &v24[v8];
          goto LABEL_25;
        }
        v16 = 96 - v8;
        v17 = &v24[v8];
        v8 += 5;
        sub_6C054(v17, v16, "<x%X>", v12, v20, v21);
      }
      else
      {
        v14 = strlen((const char *)dest[v12]);
        if ( v8 + 1 + v14 > 0x5F )
          goto LABEL_27;
        v15 = &v24[v8];
        v8 += v14;
        sub_6D4DC(v15);
      }
      v11 = v5 > v7 - s;
      if ( v8 > 0x5F )
        v11 = 0;
    }
    while ( v11 );
    if ( v8 > 0x5F )
      v18 = v25;
    else
      v18 = &v24[v8];
  }
  else
  {
    v18 = v24;
  }
LABEL_25:
  *v18 = 0;
  return sub_41F44(v20 + 16, (const char *)&v23);
}
