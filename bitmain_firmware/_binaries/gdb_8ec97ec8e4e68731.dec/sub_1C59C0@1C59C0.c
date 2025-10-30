void __fastcall sub_1C59C0(_DWORD *a1)
{
  _DWORD **v1; // r2
  _DWORD *v2; // r3
  _BYTE *v3; // r0
  int v4; // lr
  int *v5; // r0
  void *ptr; // [sp+4h] [bp-1Ch] BYREF
  int v7; // [sp+Ch] [bp-14h]

  if ( !a1 )
  {
    v3 = (_BYTE *)sub_94700(
                    (int)"./printcmd.c",
                    1786,
                    "%s: Assertion `%s' failed.",
                    "void delete_display(display*)",
                    "display != NULL");
    v7 = v4;
    sub_1C42A8((char **)&ptr, v3);
    v5 = (int *)ptr;
    if ( *((int *)ptr + 2) > 0 )
    {
      switch ( *((_DWORD *)ptr + 4) )
      {
        case 0x15:
        case 0x16:
        case 0x1F:
        case 0x3F:
        case 0x40:
        case 0x41:
        case 0x42:
          break;
        default:
          sub_946B0("Expression is not an assignment (and might have no effect)");
          v5 = (int *)ptr;
          break;
      }
    }
    sub_14CD3C(v5);
    if ( ptr )
      free(ptr);
    __asm { POP             {PC} }
  }
  v1 = (_DWORD **)dword_487CEC;
  if ( a1 == (_DWORD *)dword_487CEC )
  {
    v1 = (_DWORD **)*a1;
    dword_487CEC = *a1;
  }
  if ( v1 )
  {
    v2 = *v1;
    if ( a1 == *v1 )
    {
      v2 = v1;
LABEL_11:
      *v2 = *a1;
    }
    else
    {
      while ( v2 )
      {
        if ( a1 == (_DWORD *)*v2 )
          goto LABEL_11;
        v2 = (_DWORD *)*v2;
      }
    }
  }
  sub_1C5988(a1);
}
