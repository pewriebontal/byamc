/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mikhaing <0x@bontal.net>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 21:10:20 by mikhaing          #+#    #+#             */
/*   Updated: 2025/08/15 04:45:49 by mikhaing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLORS_H
# define COLORS_H

// Define color codes for terminal output

// Reset all attributes
# define RESET "\033[0m"

// Text attributes
# define BOLD "\033[1m"
# define DIM "\033[2m"
# define ITALIC "\033[3m"
# define UNDERLINE "\033[4m"
# define BLINK "\033[5m"
# define REVERSE "\033[7m"
# define HIDDEN "\033[8m"

// Regular foreground colors
# define BLACK "\033[30m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define MAGENTA "\033[35m"
# define CYAN "\033[36m"
# define WHITE "\033[37m"

// Bright/bold foreground colors
# define B_BLACK "\033[90m"
# define B_RED "\033[91m"
# define B_GREEN "\033[92m"
# define B_YELLOW "\033[93m"
# define B_BLUE "\033[94m"
# define B_MAGENTA "\033[95m"
# define B_CYAN "\033[96m"
# define B_WHITE "\033[97m"

// Regular background colors
# define BG_BLACK "\033[40m"
# define BG_RED "\033[41m"
# define BG_GREEN "\033[42m"
# define BG_YELLOW "\033[43m"
# define BG_BLUE "\033[44m"
# define BG_MAGENTA "\033[45m"
# define BG_CYAN "\033[46m"
# define BG_WHITE "\033[47m"

// Bright/bold background colors
# define BG_B_BLACK "\033[100m"
# define BG_B_RED "\033[101m"
# define BG_B_GREEN "\033[102m"
# define BG_B_YELLOW "\033[103m"
# define BG_B_BLUE "\033[104m"
# define BG_B_MAGENTA "\033[105m"
# define BG_B_CYAN "\033[106m"
# define BG_B_WHITE "\033[107m"

#endif /* COLORS_H */