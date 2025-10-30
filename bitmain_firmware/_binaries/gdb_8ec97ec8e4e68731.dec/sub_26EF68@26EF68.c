int *__fastcall sub_26EF68(int a1, int a2)
{
  int v2; // r7
  int v3; // r8
  int v4; // r9
  int v5; // r10
  int v6; // r11
  int v9; // r1
  _DWORD *v10; // r4
  int v11; // r0
  int v12; // r0
  int v13; // r1
  int *result; // r0
  _DWORD **v15; // r0
  const char *v16; // r4
  size_t v17; // r7
  int v18; // r0
  _BYTE *v19; // r4
  _DWORD *v20; // r0
  int v21; // r0
  _DWORD **v22; // r0
  int v23; // r0
  int v24; // r1
  int v25; // r0
  int v26; // lr
  int v27; // r9
  int v28; // r4
  void *v29; // r5
  int v30; // r6
  int *v31; // r0
  _BYTE v32[80]; // [sp+4h] [bp-74h] BYREF
  int v33; // [sp+54h] [bp-24h]
  int v34; // [sp+58h] [bp-20h]
  int v35; // [sp+5Ch] [bp-1Ch]
  int v36; // [sp+60h] [bp-18h]
  int v37; // [sp+64h] [bp-14h]
  int v38; // [sp+68h] [bp-10h]
  int v39; // [sp+6Ch] [bp-Ch]
  int v40; // [sp+70h] [bp-8h]
  int v41; // [sp+74h] [bp-4h]

  v10 = (_DWORD *)sub_249854(*(char **)(a2 + 4));
  if ( v10 )
  {
    v11 = off_489BC4();
    v10[4] = v11;
    if ( v11 )
    {
      sub_1780B4();
      return sub_26DAF4(*(_DWORD **)(v12 + 124), v13, v10[6], v10[7]);
    }
    else
    {
      sub_1780B4();
      return (int *)sub_26BB80(*v15);
    }
  }
  else
  {
    switch ( *(_DWORD *)(a2 + 8) )
    {
      case 0:
        sub_1780B4();
        v19 = sub_26BB80(*v22);
        break;
      case 1:
        v19 = sub_26C4E0(*(int **)(a2 + 16));
        if ( (v19[4] & 2) != 0 )
          ((void (*)(void))loc_26E00C)();
        break;
      case 2:
        v19 = (_BYTE *)(**(int (__fastcall ***)(int, int, _DWORD))(a2 + 16))(a1, a2, *(_DWORD *)(a2 + 20));
        break;
      case 3:
        sub_1780B4();
        v19 = sub_26BB80(*(_DWORD **)(v21 + 164));
        break;
      case 4:
        v20 = *(_DWORD **)(a2 + 16);
        if ( v20 )
        {
          v19 = sub_26DAF4(v20, v9, *(_DWORD *)(a2 + 24), *(_DWORD *)(a2 + 28));
        }
        else
        {
          sub_1780B4();
          v19 = sub_26DAF4(*(_DWORD **)(v23 + 12), v24, *(_DWORD *)(a2 + 24), *(_DWORD *)(a2 + 28));
        }
        break;
      case 5:
        v16 = *(const char **)(a2 + 16);
        v17 = strlen(v16);
        sub_1780B4();
        v19 = (_BYTE *)sub_2623E0(v16, v17, *(_DWORD **)(v18 + 4));
        break;
      default:
        v25 = sub_94700((int)"value.c", 2282, "bad kind");
        v33 = 0;
        v34 = a2;
        v35 = a1;
        v36 = v2;
        v37 = v3;
        v38 = v4;
        v39 = v5;
        v40 = v6;
        v41 = v26;
        v27 = sub_B894C(v25);
        sub_2665F0(v32);
        v28 = dword_48AA0C;
        if ( dword_48AA0C )
        {
          do
          {
            sub_259F10("$%s = ", *(const char **)(v28 + 4));
            v29 = sub_92E28();
            v30 = sub_26EF68(v27, v28);
            v31 = (int *)sub_242F8C();
            sub_266C84(v30, *v31, (int)v32);
            sub_92E40((int)v29);
            sub_259F10((char *)&word_356638);
            v28 = *(_DWORD *)v28;
          }
          while ( v28 );
          __asm { POP             {R4-R11,PC} }
        }
        sub_259858(
          "No debugger convenience variables now defined.\n"
          "Convenience variables have names starting with \"$\";\n"
          "use \"set\" as in \"set $foo = 5\" to define them.\n");
        __asm { POP             {R4-R11,PC} }
        return result;
    }
    if ( *(_DWORD *)(a2 + 8) != 2 && *(_DWORD *)v19 != 6 )
    {
      *((_DWORD *)v19 + 2) = a2;
      *(_DWORD *)v19 = 3;
    }
    return (int *)v19;
  }
}
