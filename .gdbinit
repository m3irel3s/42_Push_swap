# #GDB Settings
# set print pretty on
# set print array on

# set style enabled on
# # set style highlight foreground red
# # set style string foreground yellow
# # set style comment foreground green
# # set style function foreground magenta


# ### Info Stats
# set logging on
# # set trace-commands on

# # push_swap.c
# define main
# 	# disp *argv@argc
# 	disp *temp_b
# 	disp temp_b
	
# end

# define init_stack
# 	disp argv
# 	disp *argv
# end

# define check_arguments
# 	disp argc
# 	disp argv
# end

# define check_valid_number
# 	disp arr
# 	disp j
# 	disp *arr[j]
# 	disp arr[j]
# end

# define rotate
# 	disp *head
# 	disp *temp_head
# 	disp *tail
# end

# define swap
# 	disp *first
# 	disp *second
# 	disp *second->next
# end

# define push
# 	disp *head_a
# 	disp *head_b
# 	disp *temp_a
# 	disp *temp_b
# end

# define append_to_stack
# 	disp *new_node
# 	disp *last
# end

# define give_index
# 	disp argv[i]
# 	disp argv[i + 1]
# 	disp sorted
# 	disp tab[i]
# 	disp tab[i + 1]
# end

# define test_sort
# 	disp chunk_size
# 	disp chunk_size * 2
# 	disp curr->index
# 	disp curr->num
# 	disp *stack->a
# end

# define is_sorted
# 	disp curr->index
# 	disp curr->next->index
# end

# define recalculate_index
# 	disp curr
# 	disp tab[i]
# end

# define sort_three
# 	disp *head
# 	disp *highest
# 	disp *head->next
# 	disp *head->next->next
# end

# fs cmd
# file push_swap
# break main
# break test_sort
# run 2 0 1
# # run 370 101 96 8 393 523 430 113 221 142 106 388 500 420 599 162 462 64 169 504 339 315 35 59 10 192 163 131 468 529 7 335 371 305 17 232 387 225 181 436 243 110 470 47 217 252 378 179 344 384 114 314 359 150 146 296 581 480 82 317 485 310 175 448 36 484 210 585 74 40 26 355 130 362 583 149 92 400 62 262 93 57 582 54 160 425 80 488 320 311 255 39 535 205 89 364 547 218 572 254 439 49 533 414 91 168 240 443 348 326 214 323 447 141 458 293 9 345 302 81 358 195 321 510 301 188 197 483 590 250 159 191 125 545 267 242 540 406 511 405 67 553 229 60 570 578 14 105 369 419 124 539 509 564 103 337 69 274 589 399 593 401 417 412 56 566 434 154 220 111 29 579 61 528 76 108 497 98 211 134 133 119 147 170 482 474 273 166 492 374 537 194 263 289 184 99 408 397 472 450 383 503 230 140 257 598 530 312 44 416 435 266 23 213 363 543 520 212 407 546 48 173 275 20 122 343 386 415 174 422 231 151 327 127 277 226 120 366 300 233 534 276 15 382 352 505 68 227 65 441 463 123 244 351 584 445 222 353 45 145 372 115 309 203 429 239 41 303 329 88 460 202 137 136 90 253 332 551 132 4 373 51 452 268 306 139 247 471 207 444 379 135 375 167 25 121 560 538 270 451 395 104 478 526 50 38 196 381 34 46 524 508 307 449 286 466 532 272 475 552 354 437 280 171 55 299 396 349 357 513 155 426 413 392 164 493 565 87 410 324 271 12 285 494 319 27 457 198 571 331 94 486 465 428 554 83 86 251 491 260 201 424 438 390 562 172 489 288 514 298 66 118 360 473 292 453 209 13 536 42 507 165 190 403 525 156 241 597 282 595 63 515 455 236 279 541 580 517 346 109 577 183 24 336 161 112 77 16 318 377 283 248 58 409 200 295 431 238 79 235 304 182 322 73 501 193 328 459 446 440 576 126 559 512 291 265 32 186 495 592 402 338 334 341 189 28 256 1 519 216 361 350 391 84 516 421 259 411 333 22 284 206 522 21 185 75 117 496 555 569 237 224 278 116 442 178 95 549 556 531 356 3 476 30 568 100 219 544 467 469 129 596 586 204 153 499 385 368 477 423 558 563 550 294 249 234 376 542 521 128 365 18 404 199 389 264 78 432 70 588 342 187 487 72 31 325 177 398 152 316 464 144 158 557 380 600 308 575 479 591 527 157 456 498 143 506 33 490 461 245 290 297 52 43 215 567 454 518 261 313 561 548 2 573 330 223 97 11 228 594 71 433 587 208 281 6 367 394 418 5 85 481 107 347 180 258 502 427 37 246 269 19 102 340 138 148 287 176 574 53 

# # fs cmd
# # run +32 10 -12 -32 +12 -84821412 -432 143 134

# # fs cmd
# # run "+32 10 -12 -32 +12 -84821412 -432 143 134"

# # fs cmd
# # run "+32 10 -12 -32 +12 -84821412 -432 143 134"

# # fs cmd
# # run "+32 10 -12 -32 +12 -84821412 -432 143 134"


# info break
# info watch