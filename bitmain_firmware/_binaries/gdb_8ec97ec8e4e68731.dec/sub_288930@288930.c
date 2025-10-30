char *__fastcall sub_288930(const char *a1)
{
  char *result; // r0
  int *v3; // r3
  __int32_t *v4; // r0
  __int32_t *v5; // r5
  char **v6; // r3
  int v7; // r2
  int v8; // r3

  if ( !strcasecmp(a1, "bell-style") )
  {
    if ( !dword_46DEF4 )
      return "none";
    result = "visible";
    if ( dword_46DEF4 != 2 )
      return "audible";
    return result;
  }
  if ( !strcasecmp(a1, "comment-begin") )
  {
    result = (char *)dword_4900C8;
    if ( !dword_4900C8 )
      return "#";
    return result;
  }
  if ( !strcasecmp(a1, "completion-display-width") )
  {
    v3 = &dword_470760;
LABEL_24:
    sprintf(&byte_48ADB8, "%d", *v3);
    return &byte_48ADB8;
  }
  if ( !strcasecmp(a1, "completion-prefix-display-length") )
  {
    v3 = &dword_48AD20;
    goto LABEL_24;
  }
  if ( !strcasecmp(a1, "completion-query-items") )
  {
    v3 = &dword_470768;
    goto LABEL_24;
  }
  if ( !strcasecmp(a1, "editing-mode") )
  {
    if ( dword_46DED4 != 1 )
    {
      result = "none";
      if ( !dword_46DED4 )
        return "vi";
      return result;
    }
    return "emacs";
  }
  if ( !strcasecmp(a1, "history-size") )
  {
    v7 = sub_297FE4(0);
    if ( v7 )
    {
      v8 = 4784480;
      v7 = dword_490160;
    }
    sprintf(&byte_48ADB8, "%d", v7, v8);
    return &byte_48ADB8;
  }
  if ( !strcasecmp(a1, "isearch-terminators") )
  {
    result = (char *)dword_48ADFC;
    if ( dword_48ADFC )
    {
      v4 = sub_287C88((const char *)dword_48ADFC);
      v5 = v4;
      if ( v4 )
      {
        strncpy(&byte_48ADB8, (const char *)v4, 0x1Fu);
        sub_297758(v5);
        byte_48ADD7 = 0;
      }
      else
      {
        byte_48ADB8 = 0;
      }
      return &byte_48ADB8;
    }
    return result;
  }
  if ( strcasecmp(a1, "keymap") )
    return 0;
  if ( off_46DED0 == &unk_46FF30 )
    return "emacs";
  v6 = &off_3FD2D0;
  result = "emacs-standard";
  while ( 1 )
  {
    v6 += 2;
    if ( off_46DED0 == (_UNKNOWN *)v6[1] )
      break;
    result = v6[2];
    if ( !result )
    {
      if ( dword_46DED4 == 1 )
        return "emacs";
      result = "none";
      if ( !dword_46DED4 )
        return "vi";
      return result;
    }
  }
  return result;
}
