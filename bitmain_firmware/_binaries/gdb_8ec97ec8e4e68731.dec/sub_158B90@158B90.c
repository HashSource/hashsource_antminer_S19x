int __fastcall sub_158B90(int result, int a2, int a3, int a4)
{
  int v4; // r4
  int v8; // r1
  int v9; // r6
  int v10; // r1
  int v11; // r0
  int v12; // r0
  int v13; // r0

  if ( result && !*(_DWORD *)(*(_DWORD *)(result + 24) + 8) )
  {
    v4 = result;
    result = sub_258BD4(result);
    v8 = *(_DWORD *)(v4 + 24);
    switch ( *(_BYTE *)v8 )
    {
      case 1:
      case 0x12:
        sub_158B90(*(_DWORD *)(v8 + 20), a2, 1, a4);
        goto LABEL_11;
      case 2:
        v9 = a4 + 1;
        if ( v9 == 1 )
          sub_25A418(a2, "(");
        if ( sub_174544(v4) )
        {
          sub_25637C(a2);
        }
        else if ( sub_1744F0(v4) )
        {
          sub_256370(a2);
        }
        else
        {
          v10 = **(char **)(*(_DWORD *)(*(_DWORD *)(v4 + 24) + 20) + 24);
          if ( v10 == 2 )
            sub_158B90(*(_DWORD *)(*(_DWORD *)(v4 + 24) + 20), a2, 0, v9);
          v11 = sub_1599E0(v4, v10);
          if ( v11 != 1 )
            sub_25A418(a2, (const char *)&off_3A8254, v11);
          if ( *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(v4 + 24) + 24) + 12) + 24) + 24)
                         + 16) )
          {
            v12 = sub_159A18(v4);
            sub_25A418(a2, "%d", v12);
          }
          else
          {
            sub_25A418(a2, "*");
          }
          v13 = *(_DWORD *)(*(_DWORD *)(v4 + 24) + 20);
          if ( **(_BYTE **)(v13 + 24) != 2 )
            sub_158B90(v13, a2, 0, v9);
        }
        if ( v9 == 1 )
LABEL_11:
          result = sub_25A418(a2, ")");
        else
          result = sub_25A418(a2, (const char *)&word_3D7D40);
        break;
      case 7:
        sub_158B90(*(_DWORD *)(v8 + 20), a2, a3, a4);
        if ( a3 )
          sub_25A418(a2, ")");
        result = sub_25A418(a2, "()");
        break;
      default:
        return result;
    }
  }
  return result;
}
